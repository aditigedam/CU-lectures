#include<stdio.h>
#include<string.h>
#define Size 100000
int main()
{
    char s[Size];
    gets(s);
    // printf("%s",s);
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    printf("%d\n",strlen(s));
    printf("%d",i);
    return 0;
}