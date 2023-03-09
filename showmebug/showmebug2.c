#include<stdio.h>
int main()
{
    int border;
    int i,j,n;
    scanf("%d",&border);
    for(i = border; i > 0; i--)
    {
        for(j = i; j > 0; j-- )
        {
            printf("%d*%d=%2d\t", j,i, i*j);
        }
        printf("\n");
        for(n = i; n <= border; n++)
            printf("        ");
    }
    return 0;
}