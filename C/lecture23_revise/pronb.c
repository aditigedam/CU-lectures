#include<stdio.h>
#define Size 1000
void solve(char s[],char ss[])
{
   int n= strlen(s),m=strlen(ss)-1;
   //111001
   //000011
   int i=n-1,j=m-1,c=0;
    printf("%d",s[0] - '0' );
//    while(i>=0 && j>=0)
//    {
//        int x = ((s[i] - '0') + (ss[i] - '0') + c);
       
//    }
   
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
    fgets(ss,Size,stdin);
    solve(s,ss);
    return 0;
}