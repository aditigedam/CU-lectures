#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define mod 100000
void print(int n,int m, int x[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void solve(int n,int m, int a[][m])
{
    int ans=0;
   for(int i=0;i<n;i++)
   {
        if(a[i][j] == i && a[i][j]+2 ==j)
        {
            ans++;
        }
   }
   printf("%d\n",ans);
}
int main()
{
    int n1=1000,n2=100,m1=230,m2=230;
    int a[n1][n2],b[m1][m2];
    srand(time(NULL));
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            int x = rand();
            a[i][j] = x%mod;
            if(i%2 ==0 && j==i+2)
            {
                a[i][j] = i;
            }
        }
    }
    solve(n1,n2,a);
    //  for(int i=0;i<m1;i++)
    // {
    //     for(int j=0;j<m2;j++)
    //     {
    //         int x = rand();
    //         b[i][j] = x%mod;
    //         // printf("%d ",a[i][j]);
    //     }
    //     // printf("\n");
    // }
    // //    printf("\n");
    // int c[n1][m2];
    //  for(int i=0;i<n1;i++)
    // {
    //     for(int j=0;j<m2;j++)
    //     {
    //          c[i][j] = 0;
    //         for(int k=0;k<m1;k++)
    //         {
    //             c[i][j] +=(a[i][k]*b[k][j]);
    //         }
    //     }
    // }
    

    // print(n1,n2,a);
    // print(m1,m2,b);
    // print(n1,m2,c);



    return 0;
}