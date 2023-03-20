//area and perimenter of rectangle using union and struct;
#include<stdio.h>
struct rectangle
{
    int l;
    int b;
    int area;
    int perimeter;
};
typedef struct rectangle rec;
int main()
{
    rec r;
    r.l = 2;
    r.b = 3;
    r.area = (r.l) * (r.b);
    r.perimeter = 2*((r.l) + (r.b));

    return 0;
}
