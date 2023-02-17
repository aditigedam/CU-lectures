#include<stdio.h>
int main()
{
    int num,c=0,y;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=num;
    while(num > 0)
    {
        num = num/10;
        c++;
    }

    int x = 1;
    while(c>1)
    {
        x= x*10;
        c--;
    }
    num = y;
    while(num > 0)
    {
        int  d= num/x;
        num = num%x;
         x=x/10;
        switch(d)
        {
            case 1:
            {
            printf("One");
            break;
            }
            case 2:
            {
            printf("Two");
            break;
            }
             case 3:
            {
            printf("Three");
            break;
            }
             case 4:
            {
            printf("Four");
            break;
            }
             case 5:
            {
            printf("Five");
            break;
            }
             case 6:
            {
            printf("Six");
            break;
            }
             case 7:
            {
            printf("Seven");
            break;
            }
             case 8:
            {
            printf("Eight");
            break;
            }
             case 9:
            {
            printf("Nine");
            break;
            }
        }
    }


    return 0;
}