#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // 整数上溢
    int max_int = INT_MAX; // 最大的整数值
    printf("max_int = %d\n", max_int); // 打印最大的整数值
    max_int = max_int + 1; // 尝试加1
    printf("max_int + 1 = %d\n", max_int); // 打印结果
    // 浮点数上溢
    double max_double = DBL_MAX; // 最大的双精度浮点数值
    printf("max_double = %e\n", max_double); // 以科学计数法打印最大的双精度浮点数值
    max_double = max_double * 2; // 尝试乘以2
    printf("max_double * 2 = %e\n", max_double); // 打印结果
    // 浮点数下溢
    double min_double = DBL_MIN; // 最小的正双精度浮点数值
    printf("min_double = %e\n", min_double); // 以科学计数法打印最小的正双精度浮点数值
    min_double = min_double / 4; // 尝试除以2
    printf("min_double / 2 = %e\n", min_double); // 打印结果
    return 0;
}
