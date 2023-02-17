#include<stdio.h>
#include<string.h>
#define Size 100000
int main()
{
    char s[] = "Computer Science"; // l 16
    char a[] = "Notes";
    char t[Size],s1[Size],s2[Size];
    // scanf("%s",t);
    // fgets(s1,100,stdin);
    // fgets(s2,20,stdin);
    // printf("\n%s\n%s\n",s,t);//"aditi gedam"
    // printf("%d\n%d",strlen(s),strlen(t));

    gets(s1);
    // gets(s2);

    // strcat (s,a);
    // printf("\n%s\n",strcat(a,b));
    // int c= strcmp(s1,s2);
    //  printf("\n%d\n",c);
    // strcpy(s1,s2);
    // char* ps = strchr(s1,'t');
    // char* pe = strrchr(s1,'t');
    // printf("\n%s\n",ps);
    // printf("\n%s\n",pe);

    // int c= stricmp(s1,s2);
    // printf("%d\n",c);
    // strupr(s1);
    // char* d = strdup(s1);
    // printf("%s",d);
    // int c = strnicmp(s1,s2,3);
    //s1: "computer putter"
    //s2: "put"
    // char* pss = strstr(s1,s2);
    // printf("\n%s\n",*pss);
    //   printf("\n%s\n",pss);
    // strset(s1,'*');
    // printf("\n%s\n",s1);
    strnset(s1,'*',5);
    printf("\n%s\n",s1);
    return 0;
}