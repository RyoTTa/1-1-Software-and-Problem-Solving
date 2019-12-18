#include <stdio.h>
#include <math.h>

int main(void)
{

	double a, ratio, area, areai;
	int i;

	a = 100;
	ratio = sqrt(2.0)*(1.0 / 2);
	area = a*a;


	for (i = 2; i <= 1000; i++)
	{
		a = ratio*a;
		areai = a*a;
		area = area + areai;
		

	}
	printf("%lf\n", area);
return 0;
}