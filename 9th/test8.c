// 第6章的程序清单6.20中，power()函数返回一个double类型数的
// 正整数次幂。改进该函数，使其能正确计算负幂。另外，函数要处理0的任
// 何次幂都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此
// 把该值处理为1）。要使用一个循环，并在程序中测试该函数
#include <stdio.h>
double power(double num, int p);

int main(void)
{
    double num, result;
    int p;

    printf("请输入一个数和要计算的幂次数(以a^b的形式)\n");
    while (scanf("%lf^%d", &num, &p) == 2)
    {
        result = power(num, p);
        if (num == 0 && p ==0)
        {
            printf("请重新输入\n");
            continue;
        }
        printf("结果是%lf", result);
        printf("请输入一个数和要计算的幂次数(以a^b的形式)\n");
    }

    return 0;
}

double power(double num, int p)
{

    double result = 1;
    if (num != 0 && p == 0)
        result = 1;
    else if (num == 0 && p == 0)
        printf("0的0次幂未定义!\n");
    else
    {
        if (p > 0)
            for (result = 1; p > 0; p--)
                result *= num;
        else
            for (result = 1; p < 0; p++)
                result *= (1 / num);
    }

    return result;
}
