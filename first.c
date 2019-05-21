#include <stdio.h>
#include <math.h>

double
quadratic (int a, int b, int c, double* xplus)
{
	double xminus;

	xminus  = (-b - sqrt (b * b - 4 * a * c))/ (2 * a);
	*xplus  = (-b + sqrt (b * b - 4 * a * c))/ (2 * a);
	return (xminus);
}


int
main (void)
{
	int a, b , c ;
	printf("Key in the 3 numbers to be solved :\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);

	double xplus, xminus;

	/* calling the function. the address of xplus is sent as an argument */
	xminus = quadratic (a, b, c, &xplus);
	
	printf ("Using +: %lf\n", xplus);
	printf ("Using -: %lf\n", xminus);

	return (0);
}

