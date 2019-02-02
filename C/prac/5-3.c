#include <stdio.h>

int main(void)
{
    int day=0,weekday_0,weekday_1;

    printf("输入天数，转换成星期数加天数的程序\n");
    while(day>=0)
    {
        printf("请输入天数：");
        scanf("%d",&day);
        weekday_0=day/7;
        weekday_1=day%7;
        printf("%d天是%d星期，%d天。\n",day,weekday_0,weekday_1);
    }

    return 0;
}
