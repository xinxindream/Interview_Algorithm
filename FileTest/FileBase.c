#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    if((fp = fopen("test.txt", "a")) == NULL)
    {
        printf("cannot open the file\n");
        exit(0);
    }
    else
    {
        char ch;
        while((ch = getchar())!= '\n')
            fputc(ch,fp);
    }
    fclose(fp);
    if((fp = fopen("test.txt", "r+")) == NULL)
    {
        printf("cannot open the file\n");
        exit(0);
    }
    else
    {
        while(!feof(fp))
        {
            char ch = fgetc(fp);
            printf("%c",ch);
        }
        printf("\n");
    }
    fclose(fp);
    return 0;
}