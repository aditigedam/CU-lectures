#include<stdio.h> 
int hammingWeight(int* add) {
    int n = *add;
    int ans =0;
    for(int i=0;i<32;i++)
    {
        if(((n>>i)&1) ==1)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    int a;
    scanf("%d", &a);
    int ans = hammingWeight(&a);
    printf("ANS = %d",ans);
    return 0;
}