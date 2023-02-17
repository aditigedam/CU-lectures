#include<stdio.h> 
int pivotInteger(int* add) {
        int n = *add;
        int sum = n*(n+1)/2,temp=0;
        for(int i=1;i<=n;i++)
        {
            temp += i;
            if(temp == (sum - temp +i))
            {
                return i;
            }
        }
        return -1;
    }
int main()
{
    int a;
    scanf("%d", &a);
    int ans = pivotInteger(&a);
    printf("ANS = %d",ans);
    return 0;
}