#include <stdio.h>

//����˸������������
int main(void)
{
    int a[8];
    int i;

    printf("������8��������");
    for(i=0;i<8;i++)
        scanf("%d",&a[i]);

    printf("����������Ϊ��");

    for(i=7;i>=0;i--)
        printf("%d ",a[i]);

    return 0;
}
