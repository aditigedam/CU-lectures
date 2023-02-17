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
int x=-1,xc=0,y=-1,yc=0;
        for(int i=0;i<m;i++)
        {
            //1 3 1 3 2 1 1--> 1 1 1 1 2 3 3 
            if(a[i]==x)
            {
                xc++;
            }
            else if(a[i]==y)
            {
                yc++;
            }
            else
            {
                if(x==-1)
                {
                    x=a[i];
                    xc=1;
                }
                else if(y==-1)
                {
                    y=a[i];
                    yc =1;
                }
            }
        }
        
        if(xc > m/2)
        printf("%d",x);
        
        if(yc > m/2)
        printf("%d",y);
        
        printf("%d",-1);

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
    solve(m,a);
    return 0;
}