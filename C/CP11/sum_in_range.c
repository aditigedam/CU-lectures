#include<stdio.h>
int a,b;
int range_sum();
int main()
{
    scanf("%d %d",&a, &b);
    int ans = range_sum();
    printf("ANS = %d",ans);
    return 0;
}
int range_sum()
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+= i;
    }
    return sum;
}