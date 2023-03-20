#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    // int a[n];
   float* heights = (float*)malloc(n*sizeof(float));
     float sum=0,avg=0;
   for(int i=0;i<n;i++)
   {
    scanf("%f",&heights[i]);
    sum+=heights[i];
   }
   if((int)sum%2 ==0)
   {
     heights = (float*)realloc(heights, (n+2)*sizeof(float));
     scanf("%f",&heights[n]);
     scanf("%f",&heights[n+1]);
     sum+=heights[n];
     sum+=heights[n+1];
     avg = sum/(n+2);
   }
   else
   {
    avg = sum/n;    
   }
   printf("\nAverage = %f",avg);
   free(heights);
   return 0;
}
