#include<stdio.h>
void fun1(int a[],int n)
{
//sort 
}
void fun2(int* a, int* b)
{

}
bool fun4(char s[])
{

}
void fun5(char s[])
{
    //reverse
}
void fun6( bool (*ptr1)(char[]))
{
    int a[2] = {1,2};
    int n=2;
    (*ptr1)(a,n);
}
int main()
{
    bool (*ptr1)(char[]) = &fun4;
    fun6(ptr1);
    return 0;
}
