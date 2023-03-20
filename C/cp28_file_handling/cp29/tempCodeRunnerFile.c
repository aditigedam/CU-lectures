    FILE *f = fopen(f1.txt,'r');
    while(fgetc(f) != NULL)
    {
       printf("%c",fgetc);
    }