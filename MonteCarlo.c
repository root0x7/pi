#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



int main()
{
	int i, inside = 0;
	double x,y;	
	int n ;
	srand(time(NULL));

	printf("Chegarani kiriting: ");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;

		if(x * x + y *y <= 1.0){
			inside++;
		}
	}

	double pi = 4.0 * inside / n;
	printf("Pi ≈ %.15f\n", pi);

	return 0;
}