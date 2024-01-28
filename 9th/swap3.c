// swap3.c -- 使用指针解决函数的问题
#include <stdio.h>
void interchange(int * u, int * v);
int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);


    return 0;
}

void interchange(int * u, int * v)
{
    int temp;
    temp = *u;   //temp获取u所指向对象的值
    *u   = *v;
    *v = temp;
}
