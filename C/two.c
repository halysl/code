#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("N=");
    int n,i;
    scanf("%d",&n);
    int len=sizeof(int)*8;   //int����ռ���ݿ��

    for(i=0;i<len;i++)
    {

        putchar('0'+((unsigned)(n<<i)>>(len-1)));    //�����ƣ����߼����ƣ��ͰѶ����ƴӸ�λ����λ�����

// printf("%d",((unsigned)(n<<i)>>(len-1)));  //Ҳ�����������
    }
    printf("\n%d\n",n);

    //Another method
    for(i=0;i<len;i++)
    {
        putchar('0'+((unsigned)(n&(1<<(len-1)))>>len-1));  //��1���ƣ�Ȼ���n����λ�����㣬����߼����ƣ��Ӹ�λ����λ���������
        n<<=1;  //�ϱߵ�һ�����Ƕ����λ���д������ԣ�����Ͷ�n����һλ�
    }
    printf("\n%d\n",n);
}
