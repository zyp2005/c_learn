/*********************************************************************/
/* 编写并测试一个函数，该函数以3个double变量的地址作为参数，         */
/* 把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。 */
/*********************************************************************/
#include <stdio.h>
void sort_num(double * a, double * b, double * c);

void sort_num(double * a, double * b, double * c)
{
    double temp;
    if (*a >= *b)
    {
        temp = *b;
        *b   = *a;
        *a   = temp;
    }
    if (*b >= *c)
    {
        temp = *c;
        *c   = *b;
        *b = temp;
    }
    if (*a >= *b)
    {
        temp = *b;
        *b   = *a;
        *a   = temp;
    }
}
