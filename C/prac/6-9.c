#include <stdio.h>
//��������������������(a-b)/(a*b)=����������

float fuc(float a,float b);
int main(void)
{
    float a,b;
    char ch;

    while(ch!='Y')
    {
        printf("������һ����������");
        scanf("%f",&a);
        printf("��������һ����������");
        scanf("%f",&b);
        printf("(a-b)/(a*b)=%f\n",fuc(a,b));
        printf("�Ƿ��˳���Y/N����");
        getchar();
        scanf("%c",&ch);
    }
}

float fuc(float a,float b)
{
    return (a-b)/(a*b);
}
