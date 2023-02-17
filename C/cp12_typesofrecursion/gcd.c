#include<stdio.h>
#include<stdbool.h>
// int fact(int A)
// {
//     if(A==1)
//      return A;
    
//     return A*fact(A-1);
// }

int fun(int n)
{
if (n > 100)
return n - 10;
    return fun(fun(n + 11));
}


int fib(int n)
{
if (n < 2)
 return (n);
else
 return (fib(n-1) + fib(n-2));
}

int tib(int n)
{
if (n < 2)
 return (n);
 else if (n==2)
 {
    return 1;
 }
else
 return (tib(n-1) + tib(n-2) + tib(n-3));
}
long power (int num, int pow)
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
}
int main()
{
   int n,m;
//    scanf("%d %d",&n,&m);
//    int ans = gcd(n,m);
    int ans = power(5,6);
   printf("%d\n",ans);
    return 0;
}