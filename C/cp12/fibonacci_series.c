#include<stdio.h>
int x;
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
    if(n==x)
    {
    printf("%d  ",a+b);
    x++;
    }
    return a+b;
}
int main()
{
    int n;
    x=2;
    scanf("%d",&n);
    print_fibonacci_Series(n);

    return 0;
}