#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define Size 100001
int max(int a,int b)
{
    if(a>b)
    {return a;}
    return b;   
}
bool vowel(char c)
{
  if(c == 'A' || c== 'a' || c == 'E' || c== 'e' || c == 'I' || c== 'i'
  || c == 'O' || c== 'o' || c == 'U' || c== 'u')
  return 1;

  return 0;
}
void number_con_vol(char s[])
{
  int ans=0;
  for(int i=1;i<strlen(s);i++)
  {
    //aeiou
    if(vowel(s[i]) && vowel(s[i-1]))
    {
        if(ans==0)
        {
            ans++;
        }
        ans++;
    }
  }

  printf("%d\n",ans);
}
int main()
{
    char s[Size],t[Size];
    gets(s);
    // gets(t);
    number_con_vol(s);
return 0;
}