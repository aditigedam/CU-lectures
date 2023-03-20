#include <stdio.h>
enum week {Sun, Mon, Tue, Wed, Thur, Fri, Sat};
int main()
{
enum week today;
today = Wed;
printf("Day %d",today+1);
return 0;
}
Output is: Day 4.
• Note that the variable values are treated as integers though
they look like strings!
• In the program, can use Wed > 0 etc. Wed will be treated as
an (unisgned) integer.