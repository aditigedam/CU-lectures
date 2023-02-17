#include<stdio.h>
#include<stdlib.h>
int tailDirectRecursion(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    } 
    int a = tailDirectRecursion(n-1);
    int b = tailDirectRecursion(n-2);
    return a+b;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x = tailDirectRecursion(i);
        printf("%d ",x);
    }
    return 0;
}