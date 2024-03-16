#include <stdio.h>
int main(void)
{
    double a, b, c, d;
    a = 0.000001;
    b = 0.0000001;
    c = 12.1234;
    d = 122134.12345678243;

    printf("%f %f %f %f\n", a, b, c, d);
    printf("%#f %#f %#f %#f\n", a, b, c, d);
    printf("%e %e %e %e\n", a, b, c, d);
    printf("%g %g %g %g\n", a, b, c, d);
    printf("%#g %#g %#g %#g\n", a, b, c, d);

    return 0;
}
