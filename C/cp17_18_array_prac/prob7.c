#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 100001
int arr[n];
int mod = 100;
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
   if(m<2)
   {
    printf("Not Exit\n");
    return ;
   } 
   int x=a[0],y=a[1];
   if(x<y)
   {
    int t=x;
    x=y;
    y=t;
   }
//    printf("%d\n",x);
//    printf("%d\n",y);
   for(int i=2;i<m;i++)
   {
      if(a[i] > x)
      {
        y = x;
        x = a[i];
      }
      else if(y < a[i])
      {
        y=a[i];
      }
   }

   printf("%d\n",y);

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
    // qsort (a, sizeof(a)/sizeof(*a), sizeof(*a), comp);
   for(int i=0;i<m;i++)
   {
    printf("%d ",a[i]);
   }


   printf("\n");

   solve(m,a);
//     for(int i=0;i<m;i++)
//    {
//     printf("%d ",a[i]);
//    }
    return 0;
}