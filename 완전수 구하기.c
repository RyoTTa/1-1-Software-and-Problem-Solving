#include <stdio.h>

int main(void)
{

	int a,j,b=0;



   for(a=1;a<=1000;a++)
   {
	   b=0;
		for(j=1;j<a;j++)
		{
			if(a%j==0)
				b=b+j;
		}
			if(b==a)
			{
				
				printf("%d\n", a);
		}

   }
   return 0;
}