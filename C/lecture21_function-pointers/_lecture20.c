#include<stdio.h>
int function1(int x)
{
    return x-1;
}
int function2(int x)
{
    return x+1;
}
int function3(int x)
{
    return x-2;
}
int function4(int x)
{
    return x+2;
}
void fun( int (*f)(int))
{
  printf("%d\n",f(10));
}
int main()
{
    // int (*ptr1)(int) = function1;
    //  int (*ptr2)(int) = function2;
    //   int (*ptr3)(int) = function3;
    //    int (*ptr4)(int) = function4;
    // // printf("%d",ptr(5));
    // int (*arr[4])(int);
    // arr[0]=ptr1;
    // arr[1]=ptr2;
    // arr[2]=ptr3;
    // arr[3]=ptr4;
    // for(int i=0;i<4;i++)
    // {
    //     printf("%d\n",(arr[i])(5));
    // }

    fun(function2);
    return 0;
}