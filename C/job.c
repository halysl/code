#include<stdio.h>
int x[100],bestx[100],m[100][100];
int f1=0,f2=0,cf=0,bestf=10000,n;
void Backtrack(int t)
{
    int tempf,j;
    if(t>n) //����Ҷ�ӽ�㣬��������ײ�
    {
        if(cf<bestf)
        {   int i;
            for(i=1; i<=n; i++)
                bestx[i]=x[i];
            bestf=cf;
        }
    }
    else    //��Ҷ�ӽ��
    {
        for(j=t; j<=n; j++)
        {
            f1+=m[x[j]][1];
            tempf=f2;//������һ����ҵ�ڻ���2�����ʱ��
            f2=(f1>f2?f1:f2)+m[x[j]][2];//���浱ǰ��ҵ�ڻ���2�����ʱ��
            cf+=f2;               //�ڻ���2�ϵ����ʱ���
            if(cf<bestf)
            {
                x[t]=x[t]+x[j]-(x[j]=x[t]);  //����������ҵ��λ��
                Backtrack(t+1);
                x[t]=x[t]+x[j]-(x[j]=x[t]);
            }
            f1-=m[x[j]][1];
            cf-=f2;
            f2=tempf;
        }
    }
}

int main()
{
    int i,j;

    printf("��������ҵ����\n");
    scanf("%d",&n);
    printf("�������ڸ������ϵĴ���ʱ��\n");
    for(i=1; i<=2; i++)
        for(j=1; j<=n; j++)
            scanf("%d",&m[j][i]);
    for(i=1; i<=n; i++)
        x[i]=i;
    Backtrack(1);
    printf("��ҵ����˳��\n");
    for(i=1; i<=n; i++)
        printf("%d  ",bestx[i]);
    printf("\n");
    printf("����ʱ�䣺\n");
    printf("%d",bestf);
    return 0;
}
