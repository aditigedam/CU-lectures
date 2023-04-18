import java.util.Scanner;
import java.util.Arrays;
import java.util.*;
class student
{
  int marks;
  String name; 
}
//comarator function
class sortcmp implements Comparator<student>
{
  public int compare(student a, student b)
  {
    if(a.marks > b.marks)
    {
      //any+ve value
      return 1;
    }
    // any -ve value
    return -1;
  }
}
class Main
{
    public static void main(String[] args)
    {
      //  int a1[] ={1,2,3,4};
      //  int[] a2 ={1,2,3,4};
    //    int a3[10] = {1,2,3,4,,5,6,7,8,9,10};
    Scanner sc = new Scanner(System.in);
   //     int a3[] = new int[10];
   //     for(int i=0;i<n;i++)
   //     {
   //      a3[i] = sc.nextInt();
   //     }
   //       for(int i=0;i<n;i++)
   //     {
   //      System.out.print(a3[i] + " ");
   //     }
   //     //3 4 5 6
   //     for(int i:a3)
   //     {
   //         System.out.print(i + " ");
   //     }

   //   //2D array
   //   int b21[][] = {{1,2},{3,4},{4,5}};
   //   int b22[][] = new int[4][2];
   //   for(int i=0;i<4;i++)
   //   {
   //      for(int j=0;j<2;j++)
   //      {
   //          b22[i][j] = sc.nextInt();
   //      }
   //   }
   //    for(int i=0;i<4;i++)
   //   {
   //      for(int j=0;j<2;j++)
   //      {
   //         System.out.print(b22[i][j] + " ");
   //      }
   //   }
   //  //  34, 8, 10, 3, 2, 80, 30, 33, 1
   //  int ans=0;
   //   for(int i=0;i<n;i++)
   //   {
   //      for (int j=i+1;j<n;j++)
   //      {
   //            if(arr[j] > arr[i])
   //            {
   //              if(ans< j-i)
   //              {
   //                  ans = j-i;
   //              }
   //              // ans = Math.max(j-i);
   //            }
   //      }
   //   }
   //jagged array
   // int n=4;
   // int arr[][] = new int[n][];
   // arr[0] = new int[2];
   // arr[1] = new int[3];
   // arr[2] = new int[1];
   // arr[3] = new int[4];
   // for(int i=0;i<n;i++)
   // {
   //    for(int j=0;j<arr[i].length;j++)
   //    {
   //       a[i][j] = sc.nextInt();
   //    }
   // }
   // for(int i=0;i<n;i++)
   // {
   //    for(int j=0;j<arr[i].length;j++)
   //    {
   //      System.out.print(a[i][j] + " ");
   //    }
   //      System.out.println();
   // }
  //  int a[] = new int[]{2,4,6,7,9,10};
   // System.out.println(Arrays.binarySearch(a,5));
   // System.out.println(Arrays.binarySearch(a,1,3,5));
  //  int b[] = new int[]{3,2,1,4,1,0};
   // Arrays.sort(b);
   // Arrays.sort(b,0,3);
  //  Integer c[] = new Integer[]{3,2,1,4,1,0};
  //  System.out.println(Arrays.asList(c));//object data type
  //  System.out.println(Arrays.toString(b));//object data type
  //"[3, 2, 1, 4, 1, 0]";
  student stArr[] = new student[5];
  stArr[0] = new student();
  stArr[1] = new student();
  stArr[2] = new student();
  stArr[3] = new student();
  stArr[4] = new student();

  stArr[0].marks = 9;
  stArr[0].name = "Devansh";

  stArr[1].marks = 7;
  stArr[1].name = "Ayush";

  stArr[2].marks = 8;
  stArr[2].name = "Ashu";

  stArr[3].marks = 5;
  stArr[3].name = "Khushi";

  stArr[4].marks = 6;
  stArr[4].name = "Deepanshi";
  
  // System.out.println("Before Sorting");
  // for(int i=0;i<5;i++)
  // {
  //   System.out.println(stArr[i].name +" " + stArr[i].marks);
  // }
  // Arrays.sort(stArr,new sortcmp());
  // System.out.println("After Sorting");
  // for(int i=0;i<5;i++)
  // {
  //   System.out.println(stArr[i].name +" " + stArr[i].marks);
  // }
    System.out.println(Arrays.mismatch(new int[]{1,2,3} , new int[]{1,2,4}));
    int arr[] = new int[]{1,2};
    System.out.println(Arrays.hashCode(arr));
    System.out.println(Arrays.equals(new int[]{1,2,3} , new int[]{1,2,4}));
    int b[] = new int[10];
    Arrays.fill(b,100);
    for(int i:b)
    {
      System.out.print(i + " ");
    }
 }
}

// 1 2 5 6
// 3 5
// 4 5 7 8 9_
// n
// for(i=0;i<n;i++)
// {
   //m
// }
