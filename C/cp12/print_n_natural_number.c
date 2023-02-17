#include<stdio.h>
void print_naturalNum(int a,int n)
{
  printf("%d ",a);
  if(a == n)
  {
    return;
  }
  print_naturalNum(a+1,n);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a =1;
    print_naturalNum(a,n);
    return 0;
}