#include <stdio.h>
int main(void)
{
    int num, odd_sum, odd_count, even_sum, even_count;
    odd_sum = odd_count = even_sum = even_count = 0;
    
    printf("请输入数字(0停止):");
    while (scanf("%d", &num) == 1)
    {
        if (num == 0)
            break;
        else if (num % 2 == 0)
        {
            even_count++;
            even_sum += num;
        }
        else
        {
            odd_count++;
            odd_sum += num;
        }
    }
    printf("偶数的个数:%d, 偶数的平均值:%.2f\n", even_count,
           (double)even_sum / (double)even_count);
    printf("奇数的个数:%d, 奇数的平均值:%.2f\n", odd_count,
           (double)odd_sum / (double)odd_count);

    return 0;
}
