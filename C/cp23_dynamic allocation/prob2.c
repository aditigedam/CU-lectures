#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char word[100];
    gets(word);
    int n = strlen(word),nw=0,wl=0;
    char* temp = (char*)malloc(1*sizeof(char));
    char** w = (char**)malloc(1*sizeof(char));
    for(int i=0;i<n;i++)
    {
        if(word[i] != ' ')
        {
            wl++;
            temp = (char*)realloc(temp,(wl)*sizeof(char));
            temp[wl-1] = word[i];
        }
        else
        {
            nw++;
            w = (char**)realloc(w,(nw)*sizeof(char));
            w[nw-1] = temp;
            printf("%s\n",temp);
            wl=0;
            free(temp);
            char* t = (char*)malloc(1*sizeof(char));
            temp =t;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",w[i]);
    }
    return 0;
}
