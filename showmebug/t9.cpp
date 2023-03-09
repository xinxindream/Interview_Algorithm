#include<stdio.h>
static int b=0;
void test1(){
    static int a=1;
    a++;
    printf("%d\n",a);
}