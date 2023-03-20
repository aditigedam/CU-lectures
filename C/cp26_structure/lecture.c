#include<stdio.h>
#include<string.h>
struct studentRecord
{
    char name[20];
    char roll[10];
    int marks;
};
typedef struct studentRecord sr;
int main()
{
    sr record;
    strcpy(record.name, "devesh");
    strcpy(record.roll, "G10428");
    record.classtest = 0;
    record.midterm = 3;
    record.final = 40;
    record.grade = 'A';
    printf("name %s");
    return 0;
}
