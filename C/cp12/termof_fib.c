#include<stdio.h>
int print_fibonacci_Series(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int a =  print_fibonacci_Series(n-1);
    int b =  print_fibonacci_Series(n-2);
    return a+b;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int ans = print_fibonacci_Series(n);
    printf("Ans = %d\n",ans);
    return 0;
}