#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

class MarbleDecoration
{
public:
	int maxLength(int R, int G, int B)
	{
		int mx1 = 0, mx2 = 0;
		mx1 = max(R, G);
		mx1 = max(mx1, B);
		if (mx1 == R) mx2 = max(G, B);
		else if (mx1 == B) mx2 = max(G, R);
		else mx2 = max(B, R);
		if (mx1 == mx2) return 2 * mx1;
		else return (mx1 - ((mx1 - mx2))) + (mx2 + 1);
	}
};

int main()
{
	MarbleDecoration srm;
	cout << srm.maxLength(5, 1, 2);

	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}

/*Problem Statement
    
Ash is a marble collector and he likes to create various ornaments using his marbles.
One day, Elsh asks him to create a simple decoration for her desk.
She wants a sequence of marbles consisting of at most two different colors.
To make the sequence look interesting, each pair of adjacent marbles must have different colors.
Currently, Ash has R red marbles, G green marbles, and B blue marbles.
Elsh wants that the resulting sequence is as long as possible. Return this maximum length.
Definition
    
Class: MarbleDecoration
Method: maxLength
Parameters: int, int, int
Returns: int
Method signature: int maxLength(int R, int G, int B) (be sure your method is public)

Limits
    
Time limit (s): 2.000
Memory limit (MB): 64

Constraints
-
R will be between 0 and 50, inclusive.
-
G will be between 0 and 50, inclusive.
-
B will be between 0 and 50, inclusive.
Examples
0)

   
0
0
0
Returns: 0
Ash currently doesn't have any marbles at all.
1)

    
3
0
0
Returns: 1
The only valid sequence is (red).
2)

    
5
1
2
Returns: 5
One possible sequence is (red, blue, red, blue, red).
3)

    
7
7
4
Returns: 14

4)

    
2
3
5
Returns: 7

5)

    
13
13
13
Returns: 26*/