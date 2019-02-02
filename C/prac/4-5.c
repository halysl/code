#include <stdio.h>

int main(void)
{
    float down_speed; //单位为Mb/s
    float file_size; //单位MB
    float time;

    printf("请输入下载速度：     Mb/s");
    printf("\b\b\b\b\b\b\b\b\b");
    scanf("%f",&down_speed);
    printf("请输入文件大小：     MB");
    printf("\b\b\b\b\b\b\b");
    scanf("%f",&file_size);
    time=file_size/(down_speed/8);
    printf("At %2.2f Mb/s,a file of %2.2f MB\ndownloads in %2.2f seconds.\n",down_speed,file_size,time);

    return 0;

}
