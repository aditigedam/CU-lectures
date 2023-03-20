#include<stdio.h>
#include<stdlib.h>
void sort(int* arr, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int N,sum=0;
    scanf("%d",&N);
    int *arr = (int*)malloc(N*sizeof(N));
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        sum+= arr[i];
    }
    int k;
    scanf("%d",&k);
    arr = (int*)realloc(arr,(N+k)*sizeof(int));
    for(int i=0;i<k;i++)
    {
        scanf("%d",&arr[i+N]);
    }
    sort(arr,N+k);
    printf("Sorted values are:\n");
    for(int i=0;i<N+k;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}

