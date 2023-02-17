#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define Size 100001
int max(int a,int b)
{
    if(a>b)
    {return a;}
    return b;   
}

void sum(char s[],char t[])
{
  //1010
  //1111
  int i=strlen(s)-1,j=strlen(t)-1,n=max(i+1,j+1)+1,k=n-1,c=0;
  char ans[n];
  for(int i=0;i<n;i++)
  {
    ans[i] = '0';
  }
  while(i>=0 && j>=0)
  {
    if(s[i] == t[j])
    {
      if(s[i] == '1')
      {
         ans[k] = (c + '0');
         c=1;
      }
      else
      {
        ans[k] = c + '0';
        c=0;
      }
    }
    else
    {
        if(c==1)
        {
            ans[k] = '0';
        }
        else
        {
            ans[k] = '1';
            c=0;
        }
    }
    // printf("%c %s\n",ans[k],ans);
     i--;
     j--;
     k--;
  }
//1101 1
    // printf("%s\n",ans);
  while(i>=0)
  {
    if(s[i] == c + '0')
    {
        if(s[i] =='1')
        {
            ans[k] = '0'; 
        }
        else
        {
            break;
        }
    }
    else
    {
        ans[k] = '1';
        break;
    }
    i--;
    k--;
  }
  if(c==1)
  {
    ans[0]='1';
  }
//   printf("%s\n",ans);
    while(j>=0)
  {
    if(t[j] == c + '0')
    {
        if(t[j] =='1')
        {
            ans[k] = '0'; 
        }
        else
        {
            break;
        }
    }
    else
    {
        ans[k] = '1';
        break;
    }
    j--;
    k--;
  }
  for(int i=0;i<n;i++)
  {
      printf("%c",ans[i]);
  }
}
int main()
{
    char s[Size],t[Size];
    gets(s);
    gets(t);
    sum(s,t);
return 0;
}