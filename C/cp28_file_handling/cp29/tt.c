#include<stdio.h>
int main()
{
    FILE *f =fopen("C:\\Users\\DELL\\Desktop\\aditi\\CU-C-lectures\\C\\cp29\\f1.txt","r");
    char arr[100];
    // fgets(arr,100,f);
    // printf("%s",arr);
    // fgets(arr,100,f);
    // printf("\n%s",arr);



    while(fgets(arr,100,f) != NULL)
    {
      printf("\n%s",arr);  
    }
    fclose(f);



    // using seel command print the first index on pointer.
    
    return 0;
}
