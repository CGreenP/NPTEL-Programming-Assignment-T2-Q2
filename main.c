#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ar[10],num1=(-1),num2=0,flag=0,k=2;
    scanf("%d",&n);
    while((flag==0)&&(num1<=1000))
    {
        num1++;
        num2=0;
        ar[0]=num1;
        while(num2<=1000)
        {
            ar[1]=num2;
            while(k<10)
            {
                ar[k]=ar[k-1]+ar[k-2];
                k++;
            }
            if(ar[9]==n)
            {
                flag=1;
                break;
            }
            k=2;
            num2++;
        }
    }
    if(flag==1)
    {
        printf("%d %d",ar[0],ar[1]);
    }
    else
    {
        printf("-1 -1");
    }
    return 0;
}