#include<stdio.h>
int main()
{

int c = 5;
int *pc = &c;
c = 1;
printf("%d", *pc);    // Output: 1
printf("%d", c);  // Ouptut: 1

    return 0;
}
