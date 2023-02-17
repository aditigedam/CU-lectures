#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print(int n, int m, int a[][m])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][5],b[5][2],c[3][2];
    int n1=3,n2=5,m1=5,m2=2,n=3,m=2;
    srand(time(NULL));
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            a[i][j] = rand();
        }
    }

       for(int i=0;i<m1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            b[i][j] = rand();
        }
    }

       for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            c[i][j] =0;
            for(int k=0;k<m1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    print(3,5,a);
    return 0;
}