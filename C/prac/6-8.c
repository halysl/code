#include <stdio.h>
//��������������������(a-b)/(a*b)=
int main(void)
{
    float a,b;
    char ch;

    while(ch!='N')
    {
        printf("������һ����������");
        scanf("%f",&a);
        printf("��������һ����������");
        scanf("%f",&b);
        printf("(a-b)/(a*b)=%f\n",(a-b)/(a*b));
        printf("�Ƿ��˳���Y/N����");
        getchar();
        scanf("%c",&ch);
    }
}
