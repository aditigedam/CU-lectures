#include <stdio.h>
# define mod 1000000007
long long power(int N,int R)
{
    if(R==0) return 1;
    long long temp = power(N,R/2);
    temp=(temp*temp)%mod;
    if(R%2==1)
    {
        return (temp*N)%mod; 
    }
    return temp;
}
int main()
{
    long long N,R;
    scanf("%ld%ld",&N,&R);
    long long ans =power(N,R);
    printf("%ld",ans);
}