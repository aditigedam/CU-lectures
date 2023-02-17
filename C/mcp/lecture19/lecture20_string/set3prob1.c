#include<stdio.h>
#include<string.h>
#define Size 100001
char ans[Size];
char* remove_others(char s[])
{
    int n= strlen(s);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
        {
            ans[j] = s[i];
            j++;
        }
    }
        // printf("%s\n", ans);
    return ans;
}
int main()
{
    char s[Size];
    gets(s);
    char* ans;
    ans =remove_others(s);
    printf("%s\n", ans);
    return 0;
}