
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define Size 10000
int solve(char s[])
{
    int n = strlen(s);
    int l=n;
    while(l>=1)
    {
        int i=0,j=l-1;
        while(j<n)
        {
            int f=1;
            for(int k=i;k<=j/2;k++)
            {
                if(s[k] != s[j+1-k])
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                return l;
            }
            j++;
            i++;
        }
        l--;
    }
    return 1;
}
int main ()
{
    char s[Size];
    gets(s);
    int l =solve(s);
    printf("%d\n",l);
  return 0;
}