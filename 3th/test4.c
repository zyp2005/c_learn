#include <stdio.h>
int main(void)
{
    double num;

    printf("Enter a floating-point value:");
    scanf("%lf", &num);
    printf("%lf\n%e\n%a\n", num, num, num);

    return 0;
}
