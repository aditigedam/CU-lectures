#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a char: ");
   scanf("%c",&ch);
   if(ch >='a' && ch <='z')
   {
    printf("Small letter");
   }
   else if(ch >='A' && ch <='Z')
   {
    printf("Capital letter");
   }
   else if(ch >='0' && ch <='9')
   {
    printf("Digit");
   }
   else
   {
    printf("Special symbol");
   }
    return 0;
}