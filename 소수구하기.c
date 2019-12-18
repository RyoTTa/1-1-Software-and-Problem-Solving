#include <stdio.h>
int main (void)
{

	int a,i;
	for(i=2;i<=1000;i++)
	{
		for(a=2;a<=i;a++)
		{
			if(i%a==0)
			{
		
				if(i==a)
					printf("%d\n",i);
		
			else break;
			}
		}
	}

	return 0;

}