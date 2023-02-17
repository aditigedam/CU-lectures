#include<stdio.h>
int function1(int x){return x-1;}
int function2(int x){return x+1;}
int function3(int x){return x-2;}
int function4(int x){return x+2;}
void fun(int (*ptr)(int))
{
    printf("%d",ptr(5));
}
int main()
{
    fun(function2);
     return 0;
}