#include<stdio.h>
int main()
{
    //use of malloc
    int* ptr = (int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
        for(int i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}