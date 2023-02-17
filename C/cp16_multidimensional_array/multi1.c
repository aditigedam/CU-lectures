#include<stdio.h>
#include <stdlib.h> 
#include<time.h>
const int max = 1e5 +1;
int main()
{
    // int a[3][5];
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         a[i][j] = (i+1)*(j+1);
    //     }
    // }
    //  for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    // int a[15];
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         a[i*5 + j] = ((i+1)*(j+1));
    //         printf("%d ",a[i*5 + j]);
    //     }
    //     printf("\n");
    // }

//   srand(time(0));
//     int a[3][5];
    
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             a[i][j] = rand()%max;
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }


//matrix multiplication

int a[2][3] = {{1,2,5},{3,4,5}};
int b[3][2] = {{1,6}, {2,3},{4,5}},c[2][2];
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        c[i][j] = (a[i])
    }
}

return 0;
}
// 41 18467 6334 26500 19169 
// 15724 11478 29358 26962 24464
// 5705 28145 23281 16827 9961