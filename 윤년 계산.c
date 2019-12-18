#include <stdio.h>
#include <math.h>

main(void)

{
	int year;
	printf("계산 할 년도를 쓰시오. : ");
	scanf_s("%d", &year);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	printf("%d 년도는 윤년이 맞습니다.\n",year);
	else
	{
	printf("%d 년도는 윤년이 아닙니다.\year",year);
	}

}