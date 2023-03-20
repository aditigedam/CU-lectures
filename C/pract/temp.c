#include<stdio.h>
int main()
{
    char a[2][100];
    for(int i=0;i<2;i++)
    {
        gets(a[i]);
    }
    FILE *f1, *f2;
    f1 = fopen(a[0],"r");
    f2 = fopen(a[1],"w");
    int i=0,y=1;
     char x[100];
    while(i<10 && fgets(x,100,f1))
    { 
       fprintf(f2,"%s",x);
       i++;
    }
    return 0;
}