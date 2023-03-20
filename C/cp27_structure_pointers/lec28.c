#include<stdio.h>
enum week{sun,mon='\n',tue,wed,thur,fri,sat};
int main()
{
    enum week today = wed;
    printf("%d\n",today);
    return 0;
}
