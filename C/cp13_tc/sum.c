#include<stdio.h>
int count_digit(int n)
{
    if(n==0)
    {
        return 0;
    }
    return count_digit(n/10) + 1;
}
int sum_digit(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10 + sum_digit(n/10);
}
int binary(int n)
{
   if (n == 0)
        return 0;
    else
        return (n % 2 + 10 *
                binary(n / 2));
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans = binary(n);
    printf("%d\n",ans);
    return 0;
}