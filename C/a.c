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
    printf("参赛人数为:%d\n(第i行第j列表示和第i个选手在第j天比赛的选手序号)\n",n);
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
    printf("比赛选手个数为m，请输入参数m(m>0):");
    scanf("%d",&m);
    if(m!=0)
    gametable(m);

}
