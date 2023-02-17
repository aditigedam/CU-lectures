#include<stdio.h>
void fact(int a)
{
    long long ans =1;
    for(int i=a;i>=1;i--)
    {
        ans = ans*i;
    }
     printf("ANS = %ld",ans);
    return ans;
}
int main()
{
    int a;
    scanf("%d", &a);
    fact(a);
    return 0;
}