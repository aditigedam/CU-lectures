#include<stdio.h>
void rec(int a)
{
    //base condition
    if(a <= 0)
    {
      return ; 
    }
    //a: 5}
    rec(a-1); //
    printf("%d ",a);//1 2 3 4 5
    return;
}

long long fact(int n)
{
    //base condition
    if(n<=0)
    {
       return 1;
    }
    //main calculation
    return  n*fact(n-1);
}

int fib(int n,int arr[])
{
    //base condition
     if(n==0 || n==1)
     {
        return n;
     }
     int a = fib(n-1,arr);// fib(4) fib(3) fib(2)  fib(1) 
     int b = fib(n-2,arr); // fib(3) fib(2) fib(1)
     
     arr[n] = a+b;
    //  printf("%d ",b);
     
     return a+b;
}

int main()
{
    // rec(5);
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i] =-1;
    }
    a[0] = 0;
    a[1] =1; 
    // printf("0 ");
    fib(10,a);
    // printf("%d\n ",fib(5,a));
    for(int i=0;i<10;i++)
    {
     printf("%d ",a[i]);
    }
    // fib(5);
    return 0;
}
// fibof3 output - 2
// Aim -> 0 1 1 2 3 5 8 13 21 34 55 
// fib(n) = fin(n-1) + fib(n-2)
// stack 
// rec(5)

// fact 5 == 5*4*3*2*1
// 120

// fib(n) --> fib(n-1) + fib(n-2)

// fib(n-1) --> fib(n-2) + fib(n-3)
// fib(n-3) --> fib(n-4) + fib(n-5)