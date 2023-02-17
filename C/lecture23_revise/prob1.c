#include<stdio.h>
void solve(int arr[],int n)
{
    //-3 -3 2 4 1 0
   for(int i=0;i<n;i++)
   {
     int j=i;
     while(j>0 && arr[j] <0)
     {
        if(arr[j-1] > 0)
        {
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        else
        {
            break;
        }
        j--;
     }
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    solve(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}