#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    // scanf("%d %d %d",&a,&b,&c,&d);
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}