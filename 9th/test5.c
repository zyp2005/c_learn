// 编写并测试一个函数larger_of()，该函数把两个double类型
// 变量的值替换为较大的值。例如，larger_of(x, y)会把x和y中较大的
// 值重新赋给两个变量。
#include <stdio.h>
void larger_of(double * pt_x, double * pt_y);
int main(void)
{
    double x, y;

    printf("Please enter to number x and y:\n");
    scanf("%lf %lf", &x, &y);
    larger_of(&x, &y);
    printf("Now x = %lf, y = %lf", x, y);

    return 0;
}

void larger_of(double * pt_x, double * pt_y)
{
    *pt_x = (*pt_x >= *pt_y) ? *pt_x : *pt_y;
    *pt_y = *pt_x;
}
