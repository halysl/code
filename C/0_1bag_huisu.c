#include<stdio.h>
int n,c,bestp;//��Ʒ�ĸ���������������������ֵ
int p[10000],w[10000],x[10000],bestx[10000];//��Ʒ�ļ�ֵ����Ʒ��������x[i]�ݴ���Ʒ��ѡ�����,��Ʒ��ѡ�����

void Backtrack(int i,int cp,int cw)
{ //cw��ǰ������Ʒ������cp��ǰ������Ʒ��ֵ
    int j;
    if(i>n)//���ݽ���
    {
        if(cp>bestp)
        {
            bestp=cp;
            for(i=0;i<=n;i++) bestx[i]=x[i];
        }
    }
    else
        for(j=0;j<=1;j++)
        {
            x[i]=j;
            if(cw+x[i]*w[i]<=c)
            {
                cw+=w[i]*x[i];
                cp+=p[i]*x[i];
                Backtrack(i+1,cp,cw);
                cw-=w[i]*x[i];
                cp-=p[i]*x[i];
            }
        }
}

int main()
{
    printf("0-1��������~���ݽⷨ\n");
    int i;
    bestp=0;
    printf("�����뱳���ĳ�����,��Ʒ���ܸ�����\n");
    scanf("%d,%d",&c,&n);
    printf("������ÿ����Ʒ������,��ֵ��\n");
    for(i=1;i<=n;i++)
        scanf("%d,%d",&w[i],&p[i]);
    Backtrack(1,0,0);
    printf("����ֵΪ:\n");
    printf("%d\n",bestp);
    printf("��ѡ�е���Ʒ������(0��ʾδѡ�У�1��ʾѡ��)\n");
    for(i=1;i<=n;i++)
        printf("%d ",bestx[i]);
    printf("\n");
    return 0;
}