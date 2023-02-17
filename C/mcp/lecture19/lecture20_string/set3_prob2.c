#include<stdio.h>
#include<string.h>
#define Size 100001
char ans[Size];
void hexa(char c)
{
    if(('1' <= c && c<= '9') || ('A' <= c && c <= 'F') || ('a' <= c && c <= 'f'))
    {
        printf("YES\n");
        return ;
    }
     printf("NO\n");
}
int main()
{
    char c;
    scanf("%c",&c);
    hexa(c);
    return 0;
}