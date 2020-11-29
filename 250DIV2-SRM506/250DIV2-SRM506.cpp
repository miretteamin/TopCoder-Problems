#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class SlimeXSlimeRancher2
{
public:
	int train(vector<int> attributes)
	{
		sort(attributes.begin(), attributes.end());
		int res = 0;
		for (int i = 0; i < attributes.size() - 1; ++i)
		{
			res += attributes[attributes.size() - 1] - attributes[i];
		}
		return res;
	}
};

int main()
{
	SlimeXSlimeRancher2 srm;
	cout << srm.train({ 900,500,100 });
	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}

/*Problem Statement

You are playing a game titled Slime Rancher 2. You will be training slimes in this game.
You have a slime-in-training. Associated with the slime are N attributes, numbered 0 through N-1, each represented by a positive integer.
You are given vector<int> attributes containing N integers : the i-th integer is the initial value of the i-th attribute for the slime.
After the training is complete, each of the slime's attributes will either stay the same or increase to some positive integer less than or equal to 999.
None of the attributes will decrease in value. The weight of the training is defined as the sum of the differences between the final and initial values of all the attributes for the slime.
You are a master slime breeder, and you're able to obtain any possible final values for a slime's attributes.
This time, you would like to create a well-balanced slime. A slime is well-balanced if all of its attributes have equal values.
What is the minimum possible weight of the training?

Definition

Class:	SlimeXSlimeRancher2
Method:	train
Parameters:	vector <int>
Returns:	int
Method signature:	int train(vector <int> attributes) (be sure your method is public)

Constraints
-	attributes will contain between 2 and 50 elements, inclusive.
-	Each element of attributes will be between 1 and 999, inclusive.

Examples
0)

{1,2,3}
Returns: 3
Train the slime such that all of its attributes are equal to 3. The total weight of the training is |3 - 1| + |3 - 2| + |3 - 3| = 3.
1)

{5,5}
Returns: 0
This slime is already well-balanced.
2)

{900,500,100}
Returns: 1200

*/