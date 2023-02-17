#include<stdio.h> 
int countDigits(int num) {
    int x =num,ans=0;
    while(x>0)
    {
        int d = x%10;
        if(num%d ==0)
        {
            ans++;
        }

        x = x/10;
    }
    return ans;
}
int main()
{
    int a;
    scanf("%d", &a);
    int ans = countDigits(a);
    printf("ANS = %d",ans);
    return 0;
}