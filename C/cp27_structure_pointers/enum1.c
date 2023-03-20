#include<stdio.h>
enum months{jan,feb,mar=10,apr,may};
enum weeks{sun,mon='\t',tue,wed,thur,fri,sat};
int main()
{
    printf("%d",mon);
    return 0;
}
