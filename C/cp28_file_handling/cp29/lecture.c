#include<stdio.h>
int main()
{
    char c;
    // take input from user usng getchar
    // print c using putchar
    //open a file using fopen with a permission
    //take c from user and store it in f1 using fgetc
   FILE *f = fopen("C:\\Users\\DELL\\Desktop\\aditi\\CU-C-lectures\\C\\cp29\\f1.txt","w");
   c = fgetc(f);
   printf("\n%c\n",c);
    return 0;
}
