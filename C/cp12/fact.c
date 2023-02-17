#include<stdio.h>
long long fact(long long n)
{
    if(n==1)
    {
        return 1;
    }

    return fact(n-1)*n;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a =1;
    int ans = fact(n);
    printf("%d\n",ans);
    return 0;
}