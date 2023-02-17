#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100001
int arr[n];
int mod = 10;
void solve2(int m,int a[],int x)
{
    for(int i=0;i<m;i++)
    {
        arr[a[i]]++;
    }

    int ans=0;
    int k=x;
    for(int i=0;i<n;i++)
    {
        if(k - i >= 0 && arr[i] >0  && arr[k - i] > 0)
        {
        //a: 1 2 3 1 5 4 2
        //arr: 0 0 2 1 0 1
        // (1,4),(1,4),(2,3),(2,3),
        //x = 5
        if(k-i == i)
        {
            ans += (arr[i])*(arr[i]-1)/2;
        }
        else 
        {
            ans += arr[i]*(arr[k-i]);
        }
        arr[i]=0;
        arr[k-i]=0;
        }
    }
    printf("%d\n",ans);
}
void solve1(int m,int a[],int x)
{
    int ans=0;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(x==a[i]+a[j])
            {
                ans++;
            }
        }
    }
    printf("%d\n",ans);
}
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
int main()
{
    int m;
    //a[i]<=100000
    scanf("%d",&m);
    int a[m];
    srand(time(NULL));
    printf("Array elements are \n");
    for(int i=0;i<m;i++)
    {
        a[i] = rand()%mod;
        printf("%d ",a[i]);
    }
    printf("\n");
    int x;
    scanf("%d",&x);
    // solve1(m,a,x);
    solve2(m,a,x);
    return 0;
}