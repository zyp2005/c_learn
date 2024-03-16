// comback.c -- strcmp()的返回值
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("srcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));
    
    printf("srcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));
    
    printf("srcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));
    
    printf("srcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));
    
    printf("srcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));
    
    printf("srcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));

    return 0;
}
