#include <stdio.h>

int main(void)
{
    int day=0,weekday_0,weekday_1;

    printf("����������ת�����������������ĳ���\n");
    while(day>=0)
    {
        printf("������������");
        scanf("%d",&day);
        weekday_0=day/7;
        weekday_1=day%7;
        printf("%d����%d���ڣ�%d�졣\n",day,weekday_0,weekday_1);
    }

    return 0;
}
