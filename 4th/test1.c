// 编写一个程序,提示用户输入名和姓,然后以"名,姓"的格式打印出来.
#include <stdio.h>
int main(void)
{
    char first_name[20], last_name[20];

    printf("What's your name(include first and last name)?");
    scanf("%s %s", first_name, last_name);
    printf("\nHello, %s %s.\n", first_name, last_name);
    printf("and they can be %s,%s\n", last_name, first_name);

    return 0;
    
}
