#include <stdio.h>
#include <string.h>
int myAtoiRecursive(char str[], int n)
{

    printf("h")
    int count = 0, check;
  
    for (int i = 0; i <= strlen(str); ++i) {
        check = ('a' <= str[i] <= 'z' || 'A' <= str[i] <= 'Z') ? 1: 0;

        if (check)
            ++count;
    }

    if (count != 0) {
        return 0;
    }
    if (n == 1)
        return *str - '0';

    return (10 * myAtoiRecursive(str, n - 1) + str[n - 1]
            - '0');
}
 
// Driver Program
int main(void)
{
    char str[10];
    gets(str);
    int n = strlen(str);
    printf("%d", myAtoiRecursive(str, n));
    return 0;
}
