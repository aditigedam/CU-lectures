#include <stdio.h>
int abs(int d)
{
     if(d < 0)
     {
        return -d;
     }
     return d;
}
int d;
void findAllSequences(int diff, char* out, int start, int end)
{
	 
	if (abs(diff) > (end - start + 1) / 2)
		return;

	if (start > end)
	{
		if(diff == 0)
        {
            if(d!=0)
            printf(" %s",out);
            else
            {
            d=1;
            printf("%s",out);
            }
        }
		return;
	}
	out[start] = '0', out[end] = '1';
	findAllSequences(diff + 1, out, start + 1, end - 1);

 
	out[start] = out[end] = '1';
	findAllSequences(diff, out, start + 1, end - 1);

 
	out[start] = out[end] = '0';
	findAllSequences(diff, out, start + 1, end - 1);

	out[start] = '1', out[end] = '0';
	findAllSequences(diff - 1, out, start + 1, end - 1);
}
int main()
{
	int n ;
    scanf("%d",&n);
	char out[2 * n + 1];
	out[2 * n] = '\0';
	findAllSequences(0, out, 0, 2*n - 1);
	return 0;
}
