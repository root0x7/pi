#include <stdio.h>

int main()
{
	
	int n;
	double pi = 0.0;

	printf("Chegarani kiriting: ");
	scanf("%d",&n);


	for (int i = 0; i < n; ++i)
	{
		double term = (i%2 == 0 ? 1.0 : -1.0)/	(2.0 * i +1);
		pi += term;
	}

	pi *= 4;
	printf("Pi ≈ %.15f\n",pi);

	return 0;
}