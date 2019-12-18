#include <stdio.h>
#include <math.h>

main (void)
{

	double L, area, ratio, areai;
	int i;
	


	L=50.0;
	ratio=1.0/2;
	area=(sqrt(3.0)/4)*L*L;



	for(i=1; i<=10; i++)
	{

		L=L*ratio;
		areai=(sqrt(3.0)/4)*L*L;
		area = area + areai;

	}


	printf("°á°ú°ª : %lf",area);

}