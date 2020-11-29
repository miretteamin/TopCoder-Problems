#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class CubeAnts
{
public:
	int getMinimumSteps(vector<int> pos)
	{
		int res = 0, mx = 0;
		for (int i = 0; i < pos.size(); i++)
		{
			if (pos[i] == 0) res = 0;
			else if (pos[i] == 1 || pos[i] == 3 || pos[i] == 4) res = 1;
			else if (pos[i] == 6) res = 3;
			else res = 2;
			mx = max(res, mx);
		}
		return mx;
	}
};

int main()
{
	CubeAnts srm;
	cout << srm.getMinimumSteps({ 6, 6, 7, 6, 7, 7 });
	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}

/*She has a cube whose vertices are indexed from 0 to 7 as follows.
You are given a vector<int> pos containing the initial locations of the ants.
The i-th element of pos is the index of the vertex where the i-th ant is located. In an attempt to observe their moves, Ciel puts honey on the 0-th vertex.
The ants notice it immediately and start moving toward the honey. In a single turn, each ant will either move to an adjacent vertex along an edge of the cube or stay in its current vertex.
All moves in a turn happen simultaneously, and at all times, it is legal for multiple ants to be at the same location of the cube.
Ciel observes the ants until they all move to the 0-th vertex.
In order to determine how clever they were, she wants to know the minimal number of turns that were required for this to happen.
Return this minimal number.

Definition

Class:	CubeAnts
Method:	getMinimumSteps
Parameters:	vector<int>
Returns:	int
Method signature:	int getMinimumSteps(vector<int> pos)
(be sure your method is public)

Constraints
-	pos will contain between 1 and 50 elements, inclusive.
-	Each element of pos will be between 0 and 7, inclusive.

Examples
0)

{0,1,1}
Returns: 1
1)

{5,4}
Returns: 2
2)

{0}
Returns: 0
There is only one ant, and it is already on the 0-th vertex, so the minimum number of turns required is 0.
3)

{6,1,6}
Returns: 3
4)

{7,7,3,3,7,7,3,3}
Returns: 2
*/