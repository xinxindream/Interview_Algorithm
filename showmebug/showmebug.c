#include<stdio.h>

static int b = 0;
void test1()
{
    static a = 1;
    a++;
    printf("%d\n",a);
}

void test2(int a,int b)
{
    b++;
    a+=b;
}

int main()
{
    // int i, j, a=0;
    // for(i = 0; i < 2; i++){
    //     for(j = 0;j <= 5; j++)
    //     {
    //         if(j%3) break;
    //         a++;
    //     }
    //     a++;
    // }
    // printf("%d\n",a);

    // printf("%d\n",8/(3*5)-13/(5*8)+21/(8*13)-28/(13*15));

    // int k = 64, b = 8, c = 2;
    // k *= (16 + (b++) - (++c));
    // printf("%d\n",k);
    static int a = 1;
    int b = 2;
    test1();
    test2(a,b);
    printf("%d %d\n",a,b);
    return 0; 
}