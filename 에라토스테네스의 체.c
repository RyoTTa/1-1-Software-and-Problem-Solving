#include <stdio.h>


int main(void)
{
    int arr[1000],i,n=1;
    for(i=0;i<1000;i++)
        arr[i]=i+1;

    while(++n<=1000)
    {
        if(arr[n-1]!=0)
            for(i=n;i<1000;i++)
                if(arr[i]%n==0) arr[i]=0;
    }


    for (i=1;i<1000;i++)
        if(arr[i]!=0)
        {
            printf("%d  ",arr[i]);
        }
    return 0;
}