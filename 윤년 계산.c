#include <stdio.h>
#include <math.h>

main(void)

{
	int year;
	printf("��� �� �⵵�� ���ÿ�. : ");
	scanf_s("%d", &year);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	printf("%d �⵵�� ������ �½��ϴ�.\n",year);
	else
	{
	printf("%d �⵵�� ������ �ƴմϴ�.\year",year);
	}

}