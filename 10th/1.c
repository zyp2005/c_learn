#include <stdio.h>

void copy_arr(double ar_to[], const double ar_from[], int n); // 拷贝
void copy_ptr(double * ar_to, const double * ar_from, int n);
void copy_ptrs(double * ar_to, const double * ar_from, const double * ar_down);
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

void copy_ptrs(double * ar_to, const double * ar_from, const double * ar_down)
{
    while (ar_from < ar_down)
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
