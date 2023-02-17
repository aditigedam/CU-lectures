#include<stdio.h>
#include<stdbool.h>
bool isEven(int);
bool isOdd(int);
bool isEven(int n)
{
    if (n==0)
    return true;
    else
    return(isOdd(n-1));
}
bool  isOdd(int n) {
    return (!isEven(n));
}
int main()
{
    printf("%d\n\n",isEven(18));
    return 0;
}
int fun(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));
}