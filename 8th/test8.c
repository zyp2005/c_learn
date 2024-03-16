/****************************************************************/
/* 编写一个程序，显示一个提供加法、减法、乘法、除法的菜         */
/* 单。获得用户选择的选项后，程序提示用户输入两个数字，然后执行 */
/* 用户刚才选择的操作。该程序只接受菜单提供的选项。程序使用     */
/* float类型的变量存储用户输入的数字，如果用户输入失败，则允许  */
/* 再次输入。进行除法运算时，如果用户输入0作为第2个数（除数）， */
/* 程序应提示用户重新输入一个新值。该程序的一个运行示例如下：   */
/* Enter the operation of your choice: */
/* a. add s. subtract */
/* m. multiply d. divide */
/* q. quit */
/* a */
/* Enter first number: 22 .4 */
/* Enter second number: one */
/* one is not an number. */
/* Please enter a number, such as 2.5, -1.78E8, or 3: 1 */
/* 22.4 + 1 = 23.4 */
/* Enter the operation of your choice: */
/* a. add s. subtract */
/* m. multiply d. divide */
/* q. quit */
/* d */
/* Enter first number: 18.4 */
/* Enter second number: 0 */
/* Enter a number other than 0: 0.2 */
/* 18.4 / 0.2 = 92 */
/* Enter the operation of your choice: */
/* a. add s. subtract */
/* m. multiply d. divide */
/* q. quit */
/* q */
/* Bye. */
/****************************************************************/

#include <ctype.h>
#include <stdio.h>
void math(float num_a, float num_b, char operation);
float get_number(void);
char get_char(void);
int main(void)
{
    char ch;
    float num_a, num_b;

    printf("Enter the operation of your choice:\n");
    printf("a. add           s. subtract\n");
    printf("m. multiply      d. divide\n");
    printf("q. quit\n");
    while ((ch = get_char()) != 'q')
    {
        printf("Enter first number: ");
        num_a = get_number();
        printf("Enter second number: ");
        num_b = get_number();
        math(num_a, num_b, ch);
        printf("Enter the operation of your choice:\n");
        printf("a. add           s. subtract\n");
        printf("m. multiply      d. divide\n");
        printf("q. quit\n");
    }
    printf("Bye.\n");

    return 0;
}

char get_char()
{
    char ch;
    while (isspace(ch = getchar()))
        continue;
    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
    {
        putchar(ch);
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an operation, please use a,b,m,d or q\n");
        while (isspace(ch = getchar()))
            continue;
    }
    while (getchar() != '\n')
        continue;
    return ch;
}

float get_number(void)
{
    float number;
    char ch;

    while (scanf("%f", &number) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E, or 3: ");
    }
    while (getchar() != '\n')
        continue;

    return number;
}

void math(float num_a, float num_b, char operation)
{
    switch (operation)
    {
    case 'a':
        printf("%g + %g = %g\n", num_a, num_b, num_a + num_b);
        break;
    case 'b':
        printf("%g - %g = %g\n", num_a, num_b, num_a - num_b);
        break;
    case 'm':
        printf("%g * %g = %g\n", num_a, num_b, num_a * num_b);
        break;
    case 'd':
        while (num_b == 0)
        {
            printf("Enter a number other than 0: ");
            num_b = get_number();
        }
        printf("%g / %g = %g\n", num_a, num_b, num_a / num_b);
        break;
    }
}
