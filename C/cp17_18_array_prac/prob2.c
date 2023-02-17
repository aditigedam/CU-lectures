#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100001
int arr[n];
int mod = n;
void solve(int m,int a[])
{
    for(int i=0;i<m;i++)
    {
        arr[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int m;
    //a[i]<=100000
    scanf("%d",&m);
    // int a[m];
    srand(time(NULL));
    // for(int i=0;i<m;i++)
    // {
    //     a[i] = rand()%mod;
    // }
    int a[10] = {4,2,3,2,3,2,3,1,2,2};
    solve(m,a);
    return 0;
}