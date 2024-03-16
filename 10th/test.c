#include <stdio.h>
void show(const double * ar, int n);
int main(void)
{
    int i;
    int n = 5;
    double ar[5] = {1.1,2.2,3.3,4.4,5.5};

    for (i = 0; i < n; i++)
    {
        printf("%5g", ar[i]);
    }
    printf("\n");

    show(ar, 5);

    return 0;
}
void show(const double * ar, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%5g", ar[i]);
    }
    printf("\n");
}
