#include<stdio.h>
int main()
{
   int n,x=1,f1=0,f2=1,i;
   printf("Enter a number: ");
   scanf("%d",&n);
   level1:
        if(n>=1)
        {
            x = x*n;
            n--;
            goto level1;
        }
        else
        {
            i = x-2;
            printf("Factorial = %d\n",x);
            //  printf("%d %d ",f1,f2);
            goto level2;//0 1 1 2 3 5 8 
        }
    level2:
        if(i > 0)
        {
        int f3 = f1+f2;
        //  printf("%d ",f3);
        f1 = f2;
        f2 = f3;
        i--;
        goto level2;
        }
    printf("ans = %d\n", f2);
    return 0;
}