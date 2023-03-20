#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct Club
{
   char name[20];
   char dis[100];
   int numberOfMembers;
   char presi[10];
   int isOfficial;
};
int main()
{
    struct Club club; 
    char str[100];
    gets(club.name);
    scanf("%d",&club.numberOfMembers);
    gets(club.dis);
    scanf("%d",&club.isOfficial);
    gets(club.presi);

    if(club.isOfficial == 1)
    printf("\n%s %s having %d.\n President: %s.\n It is an official club of cu\n",club.name,club.dis,club.numberOfMembers,club.presi);
    else
    printf("\n%s %s having %d.\n President: %s.\n It  is not an official club of cu\n",club.name,club.dis,club.numberOfMembers,club.presi);
    return 0;
}
