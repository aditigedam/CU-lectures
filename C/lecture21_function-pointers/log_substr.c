#include<stdio.h>
#include<string.h>
#define Size 10000
int solve(char s[])
{
    int n= strlen(s);
    //abcbcbcbdad
    int l=n;
    while(l>=1)
    {
        // abcbcbcbdad
        int i=0,j=l-1;
        while(j<n)
        {
            //l=6, i=0,j=5,abcbca
            int f=1;
            for(int k=i;k<=j/2;k++)
            {
                //abcab
                if(s[k] != s[l-1-k])
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
int main()
{
    char s[Size];
    gets(s);
    printf("%d\n",solve(s));
    return 0;
}


