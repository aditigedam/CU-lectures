#include<stdio.h>
#define size 100001
int b[size];
int max_freq(int a[],int n)
{
    int ans = a[0],m=1;
    // for(int i=0;i<n;i++)
    // {
    //     int x=0;
    //   for(int j=0;j<n;j++)
    //   {
    //         if(a[j]==a[i])
    //         {
    //             x++;
    //         }
    //   }
    //   if(m<x)
    //   {
    //     m=x;
    //     ans = a[i];
    //   }  
    // }

    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<size;i++)
    {
        if(m<b[i])
        {
            ans= i;
            m=b[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // int ans = max_freq(a,n);
    // printf("%d",ans);
    int* b = a+1;
    return 0;
}