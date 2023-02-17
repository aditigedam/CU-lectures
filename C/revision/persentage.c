#include<stdio.h>
int main()
{
   int temp;
   printf("Enter Temperature in Celsius: ");
   scanf("%d",&temp);
   float temp_fahrenheit = ((float)9/5)*temp + 32;
   printf("Temperature in fahrenheit =\n %f\n",temp_fahrenheit);
   return 0;
}