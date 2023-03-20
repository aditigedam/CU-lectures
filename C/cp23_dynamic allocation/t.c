#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    // float* ptr =(float*)calloc(n , sizeof(float));
    // float sum=0,avg=0;
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%f",&ptr[i]);
    // }
    //     for(int i=0;i<n;i++)
    // {
    //     sum =  sum + ptr[i];
    // }
    // if((int)sum % 2 ==0)
    // {
    //     //insert a new value
    //     ptr =(float*)realloc(ptr,(n+1)*sizeof(float));
    //     scanf("%f",&ptr[n]);
    //     sum+=ptr[n];
    //     avg = sum/(n+1);
    // }
    // else
    // {
    //  avg = sum/n;
    // }
    // printf("%f\n %f\n",sum,avg);
    char** ptr = (char**)malloc(n*sizeof(char*));
    
    return 0;
}