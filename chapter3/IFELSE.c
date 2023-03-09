#include<stdio.h>
int main()
{
    // int y = -1;
    // int x;
    // scanf("%d",&x);
    // if(x!=0) y = 1;
    //     if(x>0) y = 1;
    // else
    //     y = 0;
    // printf("%d",y);
    int n;
    for(n=1;n<=10;n++)
    {
    if(n%3==0) continue;
    printf("%d",n);
    }
    printf("\n");
    int x=12;double y=3.141593;printf("%d%9.6f\n",x,y);

    char name[20];
    int num;
    scanf("name=%s num=%d",name,&num);
    printf("%s",name);
    printf("\n%d",num);

    printf("\n%x %x",name,&name[0]);
    return 0;
}