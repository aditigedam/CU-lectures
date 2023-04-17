import java.util.Scanner;
class lecture
{
    public static void main(String[] arg){
      Scanner sc = new Scanner(System.in);
    //    int a[] = {1,2,3};
       int n = sc.nextInt();
       int a[] = new int[n];
       for(int i=0;i<n;i++)
       {
        a[i] = sc.nextInt();
       }
    //    for(int i=0;i<5;i++)
    //    {
    //     System.out.print( b[i] + " ");
    //    }
    //     System.out.println( );
    //    for(int i:a)
    //    {
    //     System.out.print( i + " ");
    //    }
    //     System.out.println( );

    //     //2D array
    //     int a2[][] = {{1,2},{2,3},{3,4}};
    //     //1 2
    //     //2 3
    //     //3 4
    //     int n= 3,m=2;
    //     int b2[][] = new int[n][m];
    //     for(int i=0;i<b2.length;i++)
    //     {
    //         for(int j=0;j<b2[0].length;j++)
    //         {
    //             System.out.print(b2[i][j] + " ");
    //         }
    //     }

    int temp[] = new int[100];
    for(int i=0;i<n;i++)
    {
        // 2 3 4 1
        temp[a[i]]++;
    }
     for(int i=0;i<100;i++)
     {
        if(temp[i] > 1)
        {
            System.out.print(i + " ");
        }
     }

// O(n) approach
// 2 1 1
// 2 1 (1+3) == 2 (1+3) 4
    for(int i=0;i<n;i++)
    {
        a[a[i]%n] += n;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]/n > 1)
        {
            // print i+1;
        }
    }
    
    }
}