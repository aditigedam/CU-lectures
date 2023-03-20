#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    float *height = (float*)malloc(N*sizeof(N));
    for(int i=0;i<N;i++)
    {
        scanf("%f",&height[i]);
    }
    height = (float*)realloc(height,(N+1)*sizeof(int));
      height[N]=7.1;
    for(int i=0;i<N+1;i++)
    {
        printf("%f ",height[i]);
    }
    float avg =0,sum=0;
    for(int i=0;i<N+1;i++)
    {
        sum+=height[i];
    }
    
    printf("%f",sum);
    avg = sum/(N+1);
    printf("\nAverage height of a class = %f\n",avg);
    free(height);
return 0;
}

