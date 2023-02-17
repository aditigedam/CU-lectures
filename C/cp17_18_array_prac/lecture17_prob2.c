#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100001
int arr[n];
int mod = n;
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
void solve(int m,int a[])
{
   for(int i=0;i<m;i++)
   {
      arr[a[i]]++;
   }
//    int ans=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>0)
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
    // srand(time(NULL));
    // for(int i=0;i<m;i++)
    // {
    //     a[i] = rand()%mod;
    // }
    int a[] = {1,4,3,1,4};
    solve(m,a);
    return 0;
}