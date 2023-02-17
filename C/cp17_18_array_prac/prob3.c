#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100001
int arr[n];
int mod = n;
void solve(int m,int a[],int b[])
{
   int c[2*m];
   int i=m-1,j=m-1,k=2*m -1;
   while(i>=0 && j>=0)
   {
    if(a[i]<=b[j])
    {
      c[k] = a[i];
      i--;
    }
    else
    {
        c[k] = b[j];
        j--; 
    }
    k--;
   }
   while(j>=0)
   {
    c[k]= b[j];
    k--;
    j--;
   }
   while(i>=0)
   {
    c[k]= a[i];
    k--;
    i--;
   }
  
   for(int i=0;i<2*m;i++)
   printf("%d ",c[i]);
}

int main()
{
    int m;
    //a[i]<=100000
    scanf("%d",&m);
    // int a[m],b[m];
    // srand(time(NULL));
    // for(int i=0;i<m;i++)
    // {
    //     a[i] = rand()%mod;
    // }
    // for(int i=0;i<m;i++)
    // {
    //     b[i] = rand()%mod;
    // }
    int a[] = {5,3,2,1};
    int b[] = {6,3,1,1};
    solve(m,a,b);
    return 0;
}