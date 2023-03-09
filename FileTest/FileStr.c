#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    if((fp = fopen("test.txt","a+")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    else
    {
        char str[128] = {'\0'};
        while(scanf("%s",str)!=EOF)
        {
            fputs(str,fp);
            fputs(" ",fp);
        }
    }
    fclose(fp);

    if((fp = fopen("test.txt","r+")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    else
    {
        char str[128] = {'\0'};
        fgets(str,128,fp);
        printf("str = %s\n",str);
    }
    fclose(fp);
    return 0;
}