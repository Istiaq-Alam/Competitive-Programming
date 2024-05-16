#include <iostream>

using namespace std;

class PascalTriangle
{
	public:
		// Sum of given row in pascal triangle
		void sumPascalRow(int n)
		{
			if (n <= 0)
			{
				return;
			}
			cout << "\n Row " << n << " \n";
			// Assume number is not overflow
			long sum = (1 << n);
			cout << " Sum : " << sum << " \n";
		}
};
int main()
{
	PascalTriangle *task = new PascalTriangle();
	/*
	               1                 0-th row
	             1   1               1-st row
	           1   2   1             2-nd row
	         1   3   3   1           3-th row
	       1   4   6   4   1         4-th row
	     1   5   10   10   5   1     5-th row
	  1   6   15   20   15   6   1   6-th row
	  ---------------------------------------
	        Pascal's triangle
	*/
	/*
	    Example A
	    Row = 5th
	    [ 1  5   10  10  5   1 ]
	    -------------------------
	    [ 1 + 5 + 10 + 10 + 5 + 1 ] = 32
	*/
	task->sumPascalRow(5);
	/*
	    Example B
	    Row = 2nd
	    [ 1   2   1 ]
	    -------------------------
	    [ 1 + 2 + 1 ] = 4
	*/
	task->sumPascalRow(2);
	/*
	    Example C
	    Row = 7th
	    [ 1  7  21  35  35  21  7  1]
	    ------------------------------------------
	    [ 1 + 7 + 21 + 35 + 35 + 21 + 7 + 1] = 128
	*/
	task->sumPascalRow(7);
	return 0;
}
