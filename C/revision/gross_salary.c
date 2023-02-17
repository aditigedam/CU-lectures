#include<stdio.h>
int main()
{
    int basic,hra,da,ma;
    printf("Enter the Basic Salary: ");
    scanf("%d",&basic);
    printf("Enter the hra tax: ");
    scanf("%d",&hra);
    printf("Enter the da tax: ");
    scanf("%d",&da);
    printf("Enter the ma tax: ");
    scanf("%d",&ma);

    int gross = basic + (hra+da+ma);
    printf("Gross Salary = %d", gross);
    return 0;
}