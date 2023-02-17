#include<stdio.h>
#define size 1000
int min_element(int a[],int n)
{
  int ans = a[0];
  for(int i=0;i<n;i++)
  {
    if(ans > a[i])
    {
      ans = a[i];
    }
  }

  return ans;
}
float grade(float g[],float c[],int n)
{
    float grade_sum=0,cred_sum=0;
    for(int i=0;i<n;i++)
    {
        grade_sum += g[i]*c[i];
        cred_sum += c[i];
    }

    float ans = grade_sum/cred_sum;
    return ans ;
}
int count_a(char* name)
{
    int ans=0;
    for(int i=0;name[i] != '\0';i++)
    {
       if(name[i] =='a' || name[i] == 'A')
       {
        ans++;
       }
    }
    return ans;
}
int main()
{
    // int a[size];
    int n;
//     scanf("%d",&n);
//    float grad_pt[n],cred_pt[n];
//    for(int i=0;i<n;i++)
//    {
//      scanf("%f %f",&grad_pt[i],&cred_pt[i]);
//    }
//    float ans = grade(grad_pt,cred_pt,n);
//    int ans = min_element(a,n);
   char name[30];
   scanf("%s",name);
   int ans = count_a(name);
   printf("%d\n",ans);
    return 0;
}