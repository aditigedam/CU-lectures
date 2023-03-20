#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of malloc
    int* ptr = (int*)malloc(5*sizeof(int));
    ptr[0] = 0;
    ptr[1]=1;
    ptr[2]=2;
    *(ptr+3) = 3;
    *(ptr+4) = 4;
    for(int i=0;i<5;i++)
    {
        // printf("%d ", *(ptr + i));
         printf("%d ", ptr[i]);
    }
    return 0;
}
