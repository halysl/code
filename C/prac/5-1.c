#include <stdio.h>
#define TIME 60

int main(void)
{
    int time_min=0;

    printf("输入分钟数，转换成秒数和小时数的程序\n");
    while(time_min>=0)
    {
        printf("请输入分钟数（大于0）:");
        scanf("%d",&time_min);
        printf("%d分钟有%d秒，\n",time_min,time_min*TIME);
        printf("%d分钟有%.2f小时。\n",time_min,(float)time_min/TIME);

    }

    return 0;
}
