/*
编写一个程序,读取一个浮点数,首先以小数点计数法打印,然后以指数计数法打印.用下面的格式进行输出
a. The print is 21.3 or 2.1e+001.
b. The print is +21.290 or 2.129E+001
*/
#include <stdio.h>
int main(void)
{
    double number;

    scanf("%lf", &number);
    printf("The print is %0.1f or %0.1e\n", number, number);
    printf("The print is %+0.3f or %0.3e\n", number, number);

    return 0;
}
