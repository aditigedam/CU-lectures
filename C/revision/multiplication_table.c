#include<stdio.h>
int main()
{
    int n;
    printf("Enter the a number: ");
    scanf("%d",&n);
    int i=1;
    start:
    printf("%d x %d = %d\n", n,i,n*i);
    i++;
    if(i<=10)
    {
        goto start;
    }
    return 0;
}