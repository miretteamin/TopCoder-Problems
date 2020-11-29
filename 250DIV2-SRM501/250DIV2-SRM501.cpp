#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class FoxProgression
{
public:
	int theCount(vector <int> seq)
	{
		int s = seq.size();
		if (s == 1)
		{
			return -1;
		}
		else
		{
			int a, resg = 0, resa = 0, ans = 0;
			double g;
			g = (double)seq[1] / (double)seq[0];
			a = seq[1] - (double)seq[0];
			for (int i = 1; i < s - 1; ++i)
			{
				if ((double)seq[i + 1] / seq[i] == g) resg++;
				if ((double)seq[i + 1] - seq[i] == a) resa++;
			}
			if (resg == s - 2 && floor(g * seq[s - 1]) == ceil(g * seq[s - 1]) && floor(g) == ceil(g)) ans++;
			if (resa == s - 2 && floor(a + seq[s - 1]) == ceil(a + seq[s - 1]) && floor(a) == ceil(a)) ans++;
			if ((double)seq[s - 1] * g == (double)seq[s - 1] + a && ans > 0) ans--;
			return ans;
		}
	}
};

int main()
{
	FoxProgression srm;
	cout << srm.theCount({ 1, 1, 2, 2, 3, 3 });
	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}

/*Problem Statement
    
Fox Ciel likes sequences of integers. She especially likes sequences that are either an arithmetic progression of integers or a geometric progression of integers with an integer common ratio. She calls these beautiful sequences. An arithmetic progression is a sequence of numbers such that the difference of any two consecutive numbers of the sequence is a constant. A geometric progression is a sequence of numbers where each number after the first is found by multiplying the previous one by a constant non-zero number which is called the common ratio.

Ciel has a sequence of integers. She says that an integer is good if she can obtain a beautiful sequence by appending the integer to the end of the sequence. You are given a vector <int> seq. Calculate the number of good integers for the given sequence. If there are infinitely many good integers, return -1.
Definition
    
Class: FoxProgression
Method: theCount
Parameters: vector <int>
Returns: int
Method signature: int theCount(vector <int> seq) (be sure your method is public)
Limits:  
Time limit (s): 2.000
Memory limit (MB): 64
Constraints
-
seq will contain between 1 and 50 elements, inclusive.
-
Each element of seq will be between 1 and 500, inclusive.
Examples
0)

    
{1, 2, 4, 8}
Returns: 1
This sequence can become a geometric progression with ratio 2 if you append 16.
1)

    
{5, 3, 1}
Returns: 1
This sequence can become an arithmetic progression with difference -2 if you append -1. Note that neither the difference/ratio nor the appended integer has to be strictly positive.
2)

    
{1, 1}
Returns: 1
If you append 1, this sequence becomes a geometric progression (with ratio 1) and an arithmetic progression (with ratio 0) simultaneously. Despite the two reasons to call the resulted sequence "beautiful", there is still only one good integer.
3)

    
{8, 4}
Returns: 1
This sequence can become an arithmetic progression if you append 0. It can also become a geometric progression with ratio 0.5 if you append 2, but progressions with non-integer ratio are not beautiful.
4)

    
{1}
Returns: -1
Every integer is good for the given sequence.
5)

    
{4, 8}
Returns: 2
There are two good integers: appending 12 turns this sequence into an arithmetic progression with difference 4, and appending 16 turns it into a geometric progression with ratio 2.
6)

    
{1, 3, 4}
Returns: 0
This sequence is already neither an arithmetic nor a geometric progression, so nothing that you append can fix it.*/