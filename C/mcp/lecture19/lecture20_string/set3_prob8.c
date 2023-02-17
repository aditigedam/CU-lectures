#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define Size 100001
char hc[26];
void max_min_char(char s[])
{
  for(int i=0;i<strlen(s);i++)
  {
    hc[s[i] - 'a']++;
  }
  int maxc =s[0]-'a',minc=s[0]-'a';
  for(int i=0;i<26;i++)
  {
     if(hc[i] > hc[maxc])
     {
        maxc=i;
     }
      if(hc[i] != 0 && hc[i] < hc[minc])
     {
        minc=i;
     }
  }
  printf("Max Element is %c\n", maxc + 'a');
  printf("Min Element is %c\n", minc + 'a');
}
int main()
{
    char s[Size];
    gets(s);
max_min_char(s);
return 0;
}