#include<stdio.h>
#include<math.h>
void gametable(int m)
{
    int a[100][100];
    double k=sqrt(m);
    int n,temp,i,j,p,t;
    n=2;
    a[1][1]=1;a[1][2]=2;
    a[2][1]=2;a[2][2]=1;
    for(t=1;t<k;t++)
    {
        temp=n;n=n*2;
        for(i=temp+1;i<=n;i++)
            for(j=1;j<=temp;j++)
                a[i][j]=a[i-temp][j]+temp;
        for(i=1;i<=temp;i++)
            for(j=temp+1;j<=n;j++)
                a[i][j]=a[i+temp][(j+temp)%n];
        for(i=temp+1;i<=n;i++)
            for(j=temp+1;j<=n;j++)
                a[i][j]=a[i-temp][j-temp];

    }
    printf("��������Ϊ:%d\n(��i�е�j�б�ʾ�͵�i��ѡ���ڵ�j�������ѡ�����)\n",n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            printf("%4d",a[i][j]);
                if(j==n)
                printf("\n");

        }
}

void main()
{
    int m;
    printf("����ѡ�ָ���Ϊm�����������m(m>0):");
    scanf("%d",&m);
    if(m!=0)
    gametable(m);

}
