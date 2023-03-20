#include<stdio.h>
int main()
{
    //integer
    // FILE *f;
    // f=fopen("file.txt","w");
    // fprintf(f,"%d %d",2,3);
    // fclose(f);
    // fopen("file.txt","r");
    // int a,b;
    // fscanf(f,"%d%d",&a,&b);
    // printf("%d %d\n",a,b);


//string
    //     FILE *f;
    // f=fopen("file1.txt","w");
    // fprintf(f,"hello there how are you!!!");
    // fclose(f);
    // fopen("file1.txt","r");
    // char arr[100];
    // fgets(arr,100,f);
    // printf("%s\n",arr);

    int i;
    fprintf(stdout,"Enter a integer");
    fscanf(stdin,"%d",&i);
    fprintf(stdout,"The value you entered is %d\n",i);
    fprintf(stderr,"ERROR: No Error");
    return 0;
}
