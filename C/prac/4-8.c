#include <stdio.h>
#define gallon_to_litre 3.785
#define mile_to_kilometer 1.609

int main(void)
{
    float distance,gasoline,m;

    printf("���������е���̣�      Ӣ�");
    printf("\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%f",&distance);
    printf("�������ܺ�������    ���ء�");
    printf("\b\b\b\b\b\b\b\b\b\b");
    scanf("%f",&gasoline);

    m=distance/gasoline;
    printf("����ÿ����������ʻ�ľ����ǣ�    Ӣ�");
    printf("\b\b\b\b\b\b\b\b\b%.1f",m);

    printf("\n");

    m=(gasoline*gallon_to_litre)/((distance*mile_to_kilometer)/100);
    printf("��ʻ100�������ĵ�����Ϊ��     ����");
    printf("\b\b\b\b\b\b\b\b%.1f",m);

}
