#include <stdio.h>
#define change 0.3937008

int main(void)
{
    float tall_cm,tall_inch;
    tall_cm=0;

    printf("������ߣ����ף���ת����Ӣ��ĳ���\n");
    while(1)
    {
        if(tall_cm>=0)
        {
            printf("��������ߣ����ף���");
            scanf("%f",&tall_cm);
            tall_inch = tall_cm * change;
            printf("%.2fcm�����%.2finch��ߡ�\n",tall_cm,tall_inch);
        }

        if(tall_cm<0)
        {
            printf("�ټ���");
            return 0;

        }
    }


    return ;
}
