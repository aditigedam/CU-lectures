#include<stdio.h>
void toh(int n, char A, char B, char C)
{
	if (n > 0) {
    toh(n-1, A, C, B);

    printf ("Move disk %d from %c to %c \n", n, A, B,C);
    toh(n-1, B, C, A);
    }
}
int main()
{
    int n;
    // scanf("%d",&n);
    toh(3,'1','2','3');
    // printf("%d\n",ans);
    return 0;
}