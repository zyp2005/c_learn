/***********************************************************/
/* 设计一个函数min(x, y)，返回两个double类型值的较小值。在 */
/* 一个简单的驱动程序中测试该函数。                        */
/***********************************************************/
#include <stdio.h>
double min(double, double);
int main(void)
{
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = min(a, b);
    printf("%g is small from %g %g", c, a, b);

    return 0;
}

    double min(double x, double y)
{
    return x > y ? y : x;
}
