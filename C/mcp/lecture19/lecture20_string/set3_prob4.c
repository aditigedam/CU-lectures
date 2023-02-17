#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define Size 100001
char ans[Size];
void punct(char s[])
{
    int ans=0;
     for(int i=0;i<strlen(s);i++)
     {
        if(ispunct(s[i]))
        {
            ans++;
        }
     }
     printf("%d\n",ans);
}
int main()
{
    char s[Size];
    gets(s);
    punct(s);
    return 0;
}