#include <stdio.h>

//���û��������޺����ޣ�����������޵������е�ÿһ����������ƽ��������

int main(void)
{
    int max,min,i;

    printf("������һ���������ޣ�");
    scanf("%d",&max);
    printf("������һ���������ޣ�");
    scanf("%d",&min);

    printf("����        ƽ��        ����\n");

    for(i=min;i<max;i++)
        printf("%-12d%-12d%-12d\n",i,i*i,i*i*i);

    return 0;

}
