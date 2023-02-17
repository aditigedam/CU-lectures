#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100001
#define ERR_NO_NUM -1
#define ERR_NO_MEM -2
int arr[N];
int mod = 50;
int unique_rand (int size) {
    int i, n;
    static int numNums = 0;
    static int *numArr = NULL;

    // Initialize with a specific size.

    if (size >= 0) {
        if (numArr != NULL)
            free (numArr);
        if ((numArr = malloc (sizeof(int) * size)) == NULL)
            return ERR_NO_MEM;
        for (i = 0; i  < size; i++)
            numArr[i] = i;
        numNums = size;
    }

    // Error if no numbers left in pool.

    if (numNums == 0)
       return ERR_NO_NUM;

    // Get random number from pool and remove it (rnd in this
    //   case returns a number between 0 and numNums-1 inclusive).

    n = rand() % numNums;
    i = numArr[n];
    numArr[n] = numArr[numNums-1];
    numNums--;
    if (numNums == 0) {
        free (numArr);
        numArr = 0;
    }

    return i;
}
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
void solve1(int m,int a[])
{
 int maxe=0;
    for(int i=0;i<m;i++)
    {
        if(maxe < a[i])
        {
            maxe=a[i];
        }
    }

    for(int i=0;i<=maxe;i++)
    {
        int f=0;
        for(int j=0;j<m;j++)
        {
            if(a[j] == i)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("\n Missing Number is %d",i);
            return;
        }
    }
    printf("\n Missing Number is %d",maxe+1);
}
void solve2(int m,int a[])
{
    for(int i=0;i<m;i++)
    {
        arr[a[i]]++;
    }
   for(int i=0;i<N;i++)
   {
    if(arr[i] ==0)
    {
        printf("\nMISSING NUMBER IS %d",i);
        return ;
    }
   }
}
int main()
{
    int m;
    //a[i]<=100000
    scanf("%d",&m);
    int a[m];
    int i;

    srand (time (NULL));
    int j=0;
    a[0] = unique_rand(50);
    for(int i=1;i<m;i++)
    {
        // a[i] = rand()%mod;
        a[i] = unique_rand(-1);
    }
    for(int i=0;i<m;i++)
    printf("%d ",a[i]);
    

    // solve1(m,a);
    solve2(m,a);
    return 0;
}