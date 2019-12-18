#include <stdio.h>
#include <math.h>

int main(void)
{
	double l, ratio, linea, lineb;
	int i;

	l = 100;
	ratio = sqrt(2.0)*(1.0/2);
	linea = 4 * l;

	for (i = 2; i <= 1000; i++)
	{	
		l = l*ratio;
		lineb = 4 * l;
		linea = linea + lineb;

	}
	printf("%lf", linea);

	return;
}