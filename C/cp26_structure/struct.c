#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct student
{
    int roll;
    bool fail;
    char fav_sub[20];
    char name[20];
}_name,_name2;
int main()
{
    // struct student _name;
    _name.roll = 423;
    _name.fail = 0;
    strcpy(_name.fav_sub,"psc");
    strcpy(_name.name,"devansh");

    if(_name.fail == 0)
    {
        printf("%s roll numberc %d scored well in %s",_name.name,_name.roll,_name.fav_sub);
    }
    return 0;
}
