#include <stdio.h>

int main(void)
{
    int i,n;

    printf("����һ�����������������10��������������\n");
    printf("������һ��������");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        printf("%d ",n+i);
    }

    return 0;
}
