#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int n=4;
struct marks
{
   char sub[4];
   int mar_arr[4];
};
int main()
{
    typedf struct marks aditi;
    aditi _marks;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",_marks.mar_arr[i]);
    // }
    //     for(int i=0;i<n;i++)
    // {
    //    _marks.sub[i] = (char*)malloc(char);
    //     gets(_marks.sub[i]);
    // }

    for(int i=0;i<n;i++)
    {
        printf("%s: %d",_marks.sub[i],_marks.mar_arr[i]);
    }

    return 0;
}