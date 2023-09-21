/*
 编写一个程序,提示用户输入身高(单位:英寸)和姓名,然后以下面的格式
 显示用户刚输入的信息:
 Dabney, you are 6.208 feet tall
 使用float类型,并用/作为除号.如果你愿意,可以要求用户以米为单位显示出来.
*/
#include <stdio.h>
int main(void)
{
    float height;
    char name[20];

    printf("Please tell me your height and name:");
    scanf("%f %s", &height, name);
    printf("%s, you are %0.3f feet tall.", name, height);

    return 0;
}
