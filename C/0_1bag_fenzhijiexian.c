#include<stdio.h>
int c[10][100];/*��Ӧÿ�����������ֵ*/
int knapsack(int m,int n)
{
int i,j,w[10],p[10];
printf("������ÿ����Ʒ������,��ֵ��\n");
for(i=1;i<=n;i++)
scanf("%d,%d",&w[i],&p[i]);
for(i=0;i<10;i++)
for(j=0;j<100;j++)
c[i][j]=0;/*��ʼ������*/
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
{
if(w[i]<=j)/*�����ǰ��Ʒ������С�ڱ�������*/
{
if(p[i]+c[i-1][j-w[i]]>c[i-1][j])
/*�������Ʒ�ļ�ֵ���ϱ���ʣ�µĿռ��ܷŵ���Ʒ�ļ�ֵ*/
/*������һ��ѡ�����ѷ��������c[i][j]*/
c[i][j]=p[i]+c[i-1][j-w[i]];
else
c[i][j]=c[i-1][j];
}
else
c[i][j]=c[i-1][j];
}
return(c[n][m]);
}
int main()
{
printf("0-1��������~��֧���޽ⷨ\n");
int m,n;
int i,j;
printf("�����뱳���ĳ�����,��Ʒ���ܸ�����\n");
scanf("%d,%d",&m,&n);
printf("�����߱�����װ������ܼ�ֵΪ%d",knapsack(m,n));
printf("\n");
return 0;
}
