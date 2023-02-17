#include<stdio.h>
#define size 20
int main()
{
    char a[size],b[size];
    scanf("%s %s",a,b);
    // printf("%s %s",a,b);
    int i=0;
    //abc
    //c
    while(a[i] != '\0' && b[i] != '\0' 
    && a[i] ==b[i])
    {
        i++;
    }
    if(a[i] == '\0')
    {
        printf("%s %s",a,b);
    }
    else if(b[i] == '\0')
    {
        printf("%s %s",b,a);
    }
    else
    {
        if(a[i]>b[i])
        {
            printf("%s %s",b,a);
        }
        else
        {
            printf("%s %s",a,b);
        }
    }
    return 0;
}