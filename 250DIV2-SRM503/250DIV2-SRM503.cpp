#include <iostream>
#include <algorithm>
using namespace std;

class ToastXRaspberry
{
public:
	int apply(int upper_limit, int layer_count)
	{
		if (upper_limit >= layer_count) return 1;
		else return ceil((double)layer_count / upper_limit);
	}
};

int main()
{
	ToastXRaspberry srm;
	cout << srm.apply(73, 265);
	iostream::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	return 0;
}

/*Problem Statement
    
You have some raspberry jam and a slice of plain toast.
You're going to create a slice of breathtaking raspberry toast by applying some of the jam to the toast.
Each application will apply L layers of raspberry jam, where L is a positive integer (chosen before the application) and L is not greater than upper_limit.
A slice of breathtaking raspberry toast is a slice of plain toast that has had exactly layer_count layers of raspberry jam applied.
Return the minimum number of applications required to turn a slice of plain toast into a slice of breathtaking raspberry toast.
Definition
    
Class: ToastXRaspberry
Method: apply
Parameters: int, int
Returns: int
Method signature: int apply(int upper_limit, int layer_count) (be sure your method is public)
Limits  
Time limit (s): 2.000
Memory limit (MB): 64
Constraints
-
upper_limit will be between 1 and 100, inclusive.
-
layer_count will be between 1 and 1000, inclusive.
Examples
0)

    
4
13
Returns: 4
One possible way is to apply 4, 4, 3, then 2 layers of jam.
1)

    
8
5
Returns: 1
A single application is sufficient.
2)

    
73
265
Returns: 4*/