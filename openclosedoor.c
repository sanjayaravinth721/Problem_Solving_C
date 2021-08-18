// C++ implementation of
// doors open or closed
#include <stdio.h>
#include<math.h>

// Function to check whether 'n'
// has even number of factors or not
int hasEvenNumberOfFactors(int n)
{
	int root_n = sqrt(n);

	// if 'n' is a perfect square
	// it has odd number of factors
	if ((root_n*root_n) == n)
		return 0;

	// else 'n' has even
	// number of factors
	return 1;
}

// Function to find and print
// status of each door
void printStatusOfDoors(int n)
{
	for (int i=1; i<=n; i++)
	{
		// If even number of factors
		// final status is closed
		if (hasEvenNumberOfFactors(i))
			printf("0");

		// else odd number of factors
		// final status is open
		else
			printf("1");
	}
}

// Driver program
int main()
{
	int n = 3;
	printStatusOfDoors(n);
	return 0;
}
