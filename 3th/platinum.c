/* platinum.c -- your hello in platinum*/
#include <stdio.h>
int main(void)
{
    float hello;  //你的体重
    float value;   //相等重量的白金价格

    printf("Are you worth your hello in platinum?n");
    printf("Let's check it out.\n");
    printf("Please enter your hello in pounds: ");

    //获取用户的输入
    scanf("%f", &hello);
    //假设白金的价格是每盎司$1700
    //14.5833用于把英镑常盎司转换为金衡盎司
    value = 1700.0 * hello * 14.5833;
    printf("Your hello in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}
