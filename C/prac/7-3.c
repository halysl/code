#include <stdio.h>

//����n�����֣��������������ż���ĸ�����ƽ��ֵ
int main(void)
{
    int num[100];
    int count_single=0;
    int count_double=0;
    int sum_single=0;
    int sum_double=0;
    int i;


    printf("������һЩ���֣�\n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]==0)
            break;
        if(num[i]%2==0)
        {
            count_double++;
            sum_double+=num[i];
        }
        else
        {
            count_single++;
            sum_single+=num[i];
        }
    }

    printf("��������%d��ż������ƽ��ֵΪ%.2f\n",count_double,(float)sum_double/count_double);
    printf("��������%d����������ƽ��ֵΪ%.2f\n",count_single,(float)sum_single/count_single);

    return 0;
}
