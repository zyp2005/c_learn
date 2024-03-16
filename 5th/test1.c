#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
    int min, hour;

    printf("Enter the number of minutes to convert(<= 0 to quit): ");
    scanf("%d", &min);
    while (min > 0)
    {
        hour = min / 60;
        min  = min % 60;
        printf("it is %d hours and %d minutes\n\n", hour, min);
        printf("Enter the number of minutes to convert(<= 0 to quit): ");
        scanf("%d", &min);
    }

    return 0;
}
