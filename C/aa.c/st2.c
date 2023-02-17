#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
bool solve(char* s1, char* s2)
{
   int n1 = strlen(s1),n2 = strlen(s2),f=1;
   for(int i=0;i<s1[i] != '\0';i++)
   {
      for(int j=0;s2[j] != '\0' && s1[i+j] != '\0';j++)
      {
        if(s2[j] != s1[j+i])
        {
            f=0;
            break;
        }
      }
      if(f==1)
      {
        return 1;
      }
   }

   return 0;
}
int main()
{
    char s1[1000],s2[1000];
    scanf("%s",s1);
    printf("%s ",s1);
    // if(solve(s1,s2))
    // {
    //     printf("Yes");
    // }
    // else
    // {
    //     printf("No");
    // }
    return 0;
}