#include<stdio.h>
#include<stdbool.h>
#define size 10
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
float grade(float* g, float* c, int n)
{
  float g_sum=0,c_sum=0;
  for(int i=0;i<n;i++)
  {
    g_sum += g[i]*c[i];
    c_sum+=c[i];
  }
  float ans;
  ans = g_sum/c_sum;
  return ans;
}

int noofAs(char name[])
{
    int ans =0;
    for(int i=0;name[i] != '\0';i++)
    {
       if(name[i] == 'a' || name[i] == 'A')
       {
        ans++;
       }
    }
    return ans;
}

bool is_palin(char* s,int n)
{
    printf("%s\n",s);
//   for(int i=0;i<n;i++)
//   {
//      if(s[i] != s[n-1-i])
//      {
//         return 0;
//      }
//   }
  return 1;
}

int main()
{
   int n,ans;
//    scanf("%d",&n);
//    float grade_pt[n],cred_pt[n];
//    for(int i=0;i<n;i++)
//    {
//     scanf("%f",&grade_pt[i]);
//     scanf("%f",&cred_pt[i]);
//    }
    // ans = min_element(a,n);
//    float a = grade(grade_pt,cred_pt,n);
//    printf("%lf\n",a);
//    for(int i=0;i<n;i++)
//    {
//     b[i] = a[i];
//    }
   
//     for(int i=0;i<n;i++)
//    {
//       printf("%d ",a[i]);
//    }
//      printf("\n");
//     for(int i=0;i<n;i++)
//    {
//      printf("%d ",b[i]);
//    }
     char name[10];
     scanf("%s",name);
     scanf("%d",n);
    //  ans = noofAs(name);
    //  printf("%d ",ans);
     //abcbca
     printf("%s\n",name);
     if(is_palin(name,n))
     {
        printf("YES\n");
     }
     else
     {
        printf("NO\n");
     }

    return 0;
}