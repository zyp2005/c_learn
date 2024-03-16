/*******************************************************************/
/* 修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例           */
/* 如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜    */
/* 小了，那么下一次猜测的值应是50和100中值，也就是75。如果这次     */
/* 猜大了，那么下一次猜测的值应是50和75的中值，等等。使用二分查    */
/* 找（binary search）策略，如果用户没有欺骗程序，那么程序很快就会 */
/* 猜到正确的答案。                                                */
/*******************************************************************/
#include <stdio.h>
#define MAX 100
#define MIN 0
int main(void)
{
    int guess = (MAX + MIN) / 2;
    int min, max;
    min = MIN;
    max = MAX;
    char response;

    printf("Pick an integer from %d to %d. I will try to guess ", MAX, MIN);
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\na s if it is small.\n");
    printf("\na b if it is big.\n");
    printf("Uh..is your number %d?\n", guess);
    while ((response = getchar()) != 'y') // 获取响应
    {
        if (response == 's')
        {
            min   = guess;
            guess = (min + max) / 2;
            printf("Well, then is it %d?\n", guess);
        }
        else if (response == 'b')
        {

            max   = guess;
            guess = (max + min) / 2;
            printf("Well, than is it %d\n", guess);
        }
        else
            printf("Sorry, I understand only s, b or n.\n");
        while (getchar() != '\n')
            continue; // 跳过剩余的输入行
    }
    printf("I knew I could do it!\n");

    return 0;
}
