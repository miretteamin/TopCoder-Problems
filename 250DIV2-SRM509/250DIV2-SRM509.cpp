#include <iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

class PalindromizationDiv2
{
public:
	int getMinimumCost(int X)
	{
		string s, reverseds;
		int res = 0;
		s = to_string(X);
		reverseds = s;
		reverse(s.begin(), s.end());
		if (s == reverseds) return 0;
		else
		{
			int i = 1, mn = 10000000000;
			string s1, s2, news;
			while (true)
			{
				s1 = to_string(stoi(reverseds) + i);
				s2 = to_string(stoi(reverseds) - i);
				news = s1;
				reverse(s1.begin(), s1.end());
				if (news == s1)
				{
					mn = min(mn, i);
					break;
				}
				news = s2;
				reverse(s2.begin(), s2.end());
				if (news == s2 && X - i >= 0)
				{
					mn = min(mn, i);
					break;
				}
				i++;
			}
			return mn;
		}
	}
};

int main()
{
	PalindromizationDiv2 srm;
	cout << srm.getMinimumCost(1057);

	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}
/*Problem Statement
Little Arthur loves numbers, especially palindromic ones.
A palindromic string is a string that reads the same both forwards and backwards.
A palindromic number is a non-negative integer such that its decimal representation (without insignificant leading zeros) is a palindromic string.
For example, 12321, 101, 9, and 0 are palindromic numbers but 2011, 509, and 40 are not.
Arthur has a number X and he would like to palindromize it.
Palindromization of a number means adding or subtracting some value to obtain a palindromic number.
For example, one possible way to palindromize number 25 is adding 8 resulting in number 33, which is palindromic.
Unfortunately Arthur cannot palindromize numbers for free.
The cost of palindromization in dollars is equal to the value added or subtracted.
In the previous example Arthur would have to pay 8 dollars.
Of course Arthur would like to palindromize X spending the least amount of money.
Given X return the minimum amount of money Arthur needs.

Definition

Class:	PalindromizationDiv2
Method:	getMinimumCost
Parameters:	int
Returns:	int
Method signature: int getMinimumCost(int X) (be sure your method is public)

Constraints
- X will be between 0 and 100000 (10^5), inclusive.

Examples
0)

25
Returns: 3
In the problem statement it is shown that adding 8 to 25 results in a palindromic number 33.
However, this is not the cheapest way to palindromize 25. Arthur can subtract 3 to obtain a number 22 which is also palindromic.

1)

12321
Returns: 0
Already a palindromic number.

2)

40
Returns: 4

3)

2011
Returns: 9

4)

0
Returns: 0
*/

/*int getMinimumCost(int X)
	{
		string s, reverseds;
		int res = 0;
		s = to_string(X);
		if (s.length() == 2) res = 11;
		else for (int i = s.length(); i > 0; i -= 2) res += pow(10, i - 1);
		reverseds = s;
		reverse(s.begin(), s.end());
		if (s == reverseds) return 0;
		else if (X % res == 0) return 0;
		else
		{
			int mn = 100000;
			s = to_string(stoi(reverseds) + (reverseds[0] - '0'));
			string news = s;
			reverse(s.begin(), s.end());
			if (s==news) mn = min(mn, abs(X - (stoi(reverseds) + (reverseds[0] - '0'))));
			mn = min(mn, abs((res * (reverseds[0] - '0')) - X));
			return mn;
		}*/