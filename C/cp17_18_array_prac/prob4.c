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
void solve(int m,int a[],int x)
{
   int i=m-1;
   if(x>a[i])
   {
      return;
   }
   a[i] = x;
   while(i>0 && a[i] < a[i-1])
   {
      int t = a[i];
      a[i] = a[i-1];
      a[i-1] = t;
      i--;
   }

}

int main()
{
    int m;
    //a[i]<=100000
    scanf("%d",&m);
    int a[m];
    srand(time(NULL));
    for(int i=0;i<m;i++)
    {
        a[i] = rand()%mod;
    }
    qsort (a, sizeof(a)/sizeof(*a), sizeof(*a), comp);
   for(int i=0;i<m;i++)
   {
    printf("%d ",a[i]);
   }

   printf("\n");
   int x = rand()%mod;
   printf("value to be inserted is %d \n\n",x);
   solve(m,a,x);
    for(int i=0;i<m;i++)
   {
    printf("%d ",a[i]);
   }
    return 0;
}