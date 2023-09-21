/*
  编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打
印用户输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名
和姓的结尾对齐，如下所示：
Melissa Honeybee
      7        8
接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，
如下所示：
Melissa Honeybee
7       8
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int first_long, second_long;
    char first_name[20], second_name[20];

    printf("Please enter your first and second name:");
    scanf("%s %s", first_name, second_name);
    first_long = strlen(first_name);
    second_long = strlen(second_name);
    printf("%s %s\n", first_name, second_name);
    printf("%*d %*d", first_long, first_long, second_long, second_long);

    return 0;
}
