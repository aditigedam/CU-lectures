
#include<stdio.h>
void swap(int* a, int*b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
void _tobinary(int n)
{
    if(n==0)
    {
       return 0;
    }

    _tobinary(n/2);
    if(n%2 ==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
}
int sum_digit(int n)
{
    if(n==0)
    { return 0;}

    return n%10 + (n/10);
}
int main()
{
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d %d",&a,&b);
    // swap(&a,&b);
    // printf("numbers after swapping: ");
    // printf("%d %d",a,b);
    // _tobinary(a);
    int ans = sum_digit(a);
    printf("%d",ans);
    return 0;
}