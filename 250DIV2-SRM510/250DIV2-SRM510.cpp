#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

class TheAlmostLuckyNumbersDivTwo
{
public:
	int find(int a, int b)
	{
		int cnt = 0, temp, notlucky = 0;
		string s;
		for (int i = a; i <= b; ++i)
		{
			notlucky = 0;
			temp = i;
			if (temp / 10 == 0) cnt++;
			else
			{
				s = to_string(i);
				for (int c = 0; c < s.length(); c++)
				{
					if (s[c] != '4' && s[c] != '7') notlucky++;
				}
				if (notlucky <= 1) cnt++;
			}
		}
		return cnt;
	}
};

int main()
{
	TheAlmostLuckyNumbersDivTwo srm;
	cout << srm.find(1234,4321);

	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}

/*Problem Statement
    
John and Brus believe that the digits 4 and 7 are lucky and all others are not. According to them,
an almost lucky number is a number that contains at most one non-lucky digit in its decimal representation.
Return the total number of almost lucky numbers between a and b, inclusive.
Definition
    
Class: TheAlmostLuckyNumbersDivTwo
Method: find
Parameters: int, int
Returns: int
Method signature: int find(int a, int b) (be sure your method is public)

Limits
    
Time limit (s): 2.000
Memory limit (MB): 64
Constraints
-
a will be between 1 and 1,000,000, inclusive.
-
b will be between a and 1,000,000, inclusive.
Examples
0)

    
4
7
Returns: 4
All numbers between 4 and 7 are almost lucky.
1)

    
8
19
Returns: 4
Numbers 8, 9, 14 and 17 are almost lucky.
2)

    
28
33
Returns: 0
No almost lucky numbers here.
3)

    
1234
4321
Returns: 36*/
