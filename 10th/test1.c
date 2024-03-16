/********************************************************************************/
/* 编写一个程序，初始化一个double类型的数组，然后把该数组的内容拷贝至 */
/* 3个其他数组中（在main()中声明这4个数组）。使用带数组表示法的函数进行第1份拷
 */
/* 贝。使用带指针表示法和指针递增的函数进行第2份拷贝。把目标数组名、源数组名和
 */
/* 待拷贝的元素个数作为前两个函数的参数。第3个函数以目标数组名、源数组名和指向
 */
/* 源数组最后一个元素后面的元素的指针。也就是说，给定以下声明，则函数调用如下所
 */
/* 示： */
/* double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; */
/* double target1[5]; */
/* double target2[5]; */
/* double target3[5]; */
/* copy_arr(target1, source, 5); */
/* copy_ptr(target2, source, 5); */
/* copy_ptrs(target3, source, source + 5); */
/********************************************************************************/
#include <stdio.h>
void copy_arr(double ar_to[], const double ar_from[], int n); // 拷贝
void copy_ptr(double * ar_to, const double * ar_from, int n);
void copy_ptrs(double * ar_to, const double * ar_from, double * ar_down);
void show_arr(double ar[], int n);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    show_arr(source, 5);
    show_arr(target1, 5);
    show_arr(target2, 5);
    show_arr(target3, 5);

    return 0;
}

void copy_arr(double ar_to[], const double ar_from[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        ar_to[i] = ar_from[i];
}

void copy_ptr(double * ar_to, const double * ar_from, int n)
{
    int i;

    for (i = 0; i < n; i++)
        *(ar_to + i) = *(ar_from + i);
}

void copy_ptrs(double * ar_to, const double * ar_from, double * ar_down)
{
    while (ar_from < ar_down) // 不要搞错
    {
        *ar_to = *ar_from;
        ar_to++;
        ar_from++;
    }
}

void show_arr(double ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%5g", ar[i]);
    }
    printf("\n");
}
