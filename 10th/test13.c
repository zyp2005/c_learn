/********************************************************************************/
/* 编写一个程序，提示用户输入3组数，每组数包含5个double类型的数（假设           */
/* 用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务。               */
/* a．把用户输入的数据存储在3×5的数组中                                        */
/* b．计算每组（5个）数据的平均值                                               */
/* c．计算所有数据的平均值                                                      */
/* d．找出这15个数据中的最大值                                                  */
/* e．打印结果                                                                  */
/* 每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完成任务b，要     */
/* 编写一个计算并返回一维数组平均值的函数，利用循环调用该函数3次。对于处理其他  */
/* 任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。 */
/********************************************************************************/
#include <stdio.h>
void get_arr(double (*ar)[5], int n);
double count_average_line(const double ar[][5], int line);
double count_average_arr(const double ar[][5], int n);
double count_max_arr(const double ar[][5], int n);
void show_arr(const double ar[][5], int n);

int main(void)
{
    double ar1[3][5];
    double max, average_line[3], average_ar;

    get_arr(ar1, 3);
    average_line[0] = count_average_line(ar1, 0);
    average_line[1] = count_average_line(ar1, 1);
    average_line[2] = count_average_line(ar1, 2);
    average_ar   = count_average_arr(ar1, 3);
    max          = count_max_arr(ar1, 3);
    show_arr(ar1, 3);
    printf("average_line0 = %g\n", average_line[0]);
    printf("average_line1 = %g\n", average_line[1]);
    printf("average_line2 = %g\n", average_line[2]);
    printf("average of the ar is %g\n", average_ar);
    printf("the max of it is %g\n", max);

    return 0;
}

    void get_arr(double (*ar)[5], int n)
{
    double num;
    int i, j;
    printf("Please enter number of 3x5:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &num);
            ar[i][j] = num;
        }
}

double count_average_line(const double ar[][5], int line)
{
    double average, totle;
    int j;
    for (j = 0, totle = 0.0; j < 5; j++)
        totle += ar[line][j];
    average = totle / (double)5;
    return average;
}

double count_average_arr(const double ar[][5], int n)
{
    double average, totle;
    int i;
    for (i = 0, totle = 0.0; i < n; i++)
        totle += count_average_line(ar, i);
    average = totle / (double)(5 * n);
    return average;
}

double count_max_arr(const double ar[][5], int n)
{
    double max = ar[0][0];
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < 5; j++)
            max = max < ar[i][j] ? ar[i][j] : max;
    return max;
}

void show_arr(const double ar[][5], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%10g", ar[i][j]);
        printf("\n");
    }
}
