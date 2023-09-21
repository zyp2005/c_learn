/*
  编写一个程序,提示用户输入以兆位每秒(Mb/s)为单位的下载速度和以兆
字节(MB)为单位的文件大小.程序中应计算文件的下载时间.注意,这里1字节
等于8位.使用float类型,并用/作为除号.该程序要以下面的格式打印3个变
量的值(下载速度,文件大小和下载时间),显示小数点后面两位数字:
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.
*/
#include <stdio.h>
int main(void)
{
    float download_speed, file_size, download_time;

    printf("Please tell me the file size in megabytes:");
    scanf("%f", &file_size);
    printf("Then tell me the download speed in megabits per second:");
    scanf("%f", &download_speed);
    download_time = (8 * file_size) / download_speed;
    printf("At, %0.2f megabits per second,"
	   "a file of %0.2f megabytes downloads in %0.2f seconds.\n",
	   download_speed, file_size, download_time);

    return 0;
}
