#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TheProgrammingContestDivTwo
{
public:
	vector<int> find(int T, vector <int> requiredTime)
	{
		vector<int> res = { 0,0 };
		int temp = 0;
		sort(requiredTime.begin(), requiredTime.end());
		for (int i = 0; i < requiredTime.size(); ++i)
		{
			if ((T - requiredTime[i]) >= 0)
			{
				T -= requiredTime[i];
				res[0]++;
				temp += requiredTime[i];
				res[1] += temp;
			}
			else break;
		}
		return res;
	}
};

int main()
{
	TheProgrammingContestDivTwo srm;
	vector<int>h = srm.find(100000, { 100000 });

	cout << h[0] << "  " << h[1];
	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}

/*Problem Statement
����
Farmer John and Fox Brus are participating in a programming contest as a team.
The duration of the contest is T minutes and they are given N tasks.
Solutions can be submitted at any time during the contest, including exactly T minutes after the start of the contest. It takes them requiredTime[i] minutes to solve the i-th task.
The score in this contest is represented by two numbers, solved and penalty. Initially both numbers are 0.
If they solve a task t minutes after the start of the contest, solved increases by 1 and penalty increases by t.
Two scores are compared by solved first. If two scores have different solved, the score with bigger solved is better. If two scores have the same solved, the score with smaller penalty is better.
Return a vector <int> containing exactly two integers that describes the best score they can get. The first integer of the return value must represent solved and the second integer must represent penalty.
����
Class: TheProgrammingContestDivTwo
Method: find
Parameters: int, vector <int>
Returns: vector <int>
Method signature: vector <int> find(int T, vector <int> requiredTime) (be sure your method is public)
Limits���
Time limit (s): 2.000
Memory limit (MB): 64
Constraints
-
T will be between 1 and 100,000, inclusive.
-
requiredTime will contain between 1 and 50 elements, inclusive.
-
Each element of requiredTime will be between 1 and 100,000, inclusive.
Examples
0)

����
74
{47}
Returns: {1, 47 }
They can solve the task. solved will be 1 and penalty will be 47.

1)
��
74
{4747}
Returns: {0, 0 }
They don't have time enough to solve the task.

2)
���
47
{8, 5}
Returns: {2, 18 }
The order is important. If they solve task 0 first and task 1 second, solved will be 2 and penalty will be 21. If they solve task 1 first and task 0 second, solved will be 2 and penalty will be 18
3)
����
47
{12, 3, 21, 6, 4, 13}
Returns: {5, 86 }

4)
���
58
{4, 5, 82, 3, 4, 65, 7, 6, 8, 7, 6, 4, 8, 7, 6, 37, 8}
Returns: {10, 249 }

5)
���
100000
{100000}
Returns: {1, 100000 }*/