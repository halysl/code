#include <stdio.h>
#define TIME 60

int main(void)
{
    int time_min=0;

    printf("�����������ת����������Сʱ���ĳ���\n");
    while(time_min>=0)
    {
        printf("�����������������0��:");
        scanf("%d",&time_min);
        printf("%d������%d�룬\n",time_min,time_min*TIME);
        printf("%d������%.2fСʱ��\n",time_min,(float)time_min/TIME);

    }

    return 0;
}
