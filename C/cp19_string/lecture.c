#include<stdio.h>
#include<string.h>
#define Size 100000
int main()
{
    char s1[Size],s2[Size];
    char* temp;
    // char* s;

    gets(s1);
    // gets(s2);
    // fgets(s,Size,stdin);"\0"
    // printf("%d\n",strlen(s));
    // strcat(s1,s2);
    // int c = strcmp(s1,s2);
    // printf("%d\n",c);
    //aditi
    //Aedam

    // printf("%s %s\n",s1,s2);
    //aditi 
    //gedam
    //s1 = gedam

    // strcpy(s1,s2);
    // char* pc = strchr(s1,'t');
    // char* pe = strrchr(s1,'t');
    // printf("%s\n",pc);
    // printf("%s\n",pe);
    // int c = stricmp(s1,s2);
    // printf("%d\n",c);
    // strlwr(s1);
    // strrev(s1);
    // strupr(s1);
    // temp = strdup(s1);
    // strncat(s1,s2,5);
    // char* ps = strstr(s1,s2);
    strnset(s1,'*',5);
    printf("%s\n",s1);
    return 0;
}














