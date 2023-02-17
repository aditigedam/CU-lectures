#include<stdio.h>
int main()
{
int initial,final,consumed;
float total;
printf("Initial & Final Readings: ");
scanf("%d %d",&initial,&final);
consumed = final-initial;
if(consumed>=500)
total=consumed*5.50;
else if(consumed>=200 && consumed<=500)
total=consumed*3.50;
else if(consumed>=100 && consumed<=199)
total=consumed*2.50;
else if(consumed<100)
total=consumed*1.50;
printf("Total bill for %d units is %f",consumed,total);
return 0;
}