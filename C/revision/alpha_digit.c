#include<stdio.h>
int main()
{
   char ch;
   printf("Enter a character: ");
   scanf("%c",&ch);
   if(ch>='a' && ch<= 'z' || ch>='A' && ch <= 'Z' || ch >= '1' && ch <= '9')
   {
    printf("Yes");
   }
   else
   {
    printf("No");
   }

    return 0;
}