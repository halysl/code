#include <stdio.h>
//fibonacci�������ݹ���ú���
int fibonacci(int m)
{
    if(m==1||m==2)
        return 1;
    else
        return fibonacci(m-1)+fibonacci(m-2);
}
void f(int m)
{
	int f[100]={1,1};
	int i;
	for(i=2;i<m;i++)
	f[i]=f[i-1]+f[i-2];
	for(i=0;i<m;i++)
	{if(i%5==0)
		printf("\n");
		printf("%12d",f[i]);
	}

}
//������
void main()
{
    int m,i,sum=0;
    printf("������һ����������");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
          sum+=fibonacci(i);
	f(m);
	printf("\n");
    printf("ǰ%d���Ϊ��%ld\n",m,sum);
    }
