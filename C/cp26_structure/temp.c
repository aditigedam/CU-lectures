#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct myFirststruct
{
    char name[20];
    char gender;
    int roll;
    bool fail;
    int marks[4];
};
int main()
{
   struct myFirststruct student_info;
    char str[20];
    scanf("%c",&student_info.gender);
    printf("Enter you name: ");
    scanf("%s",str);
    strcpy(student_info.name,str);
    scanf("%d",&student_info.roll);
    scanf("%d",&student_info.fail);

    printf("\n%s\n with roll %d passed in his fav_subject",
    student_info.name, student_info.gender,student_info.roll);
    return 0;
}
