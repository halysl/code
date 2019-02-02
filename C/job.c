#include<stdio.h>
int x[100],bestx[100],m[100][100];
int f1=0,f2=0,cf=0,bestf=10000,n;
void Backtrack(int t)
{
    int tempf,j;
    if(t>n) //到达叶子结点，搜索到最底部
    {
        if(cf<bestf)
        {   int i;
            for(i=1; i<=n; i++)
                bestx[i]=x[i];
            bestf=cf;
        }
    }
    else    //非叶子结点
    {
        for(j=t; j<=n; j++)
        {
            f1+=m[x[j]][1];
            tempf=f2;//保存上一个作业在机器2的完成时间
            f2=(f1>f2?f1:f2)+m[x[j]][2];//保存当前作业在机器2的完成时间
            cf+=f2;               //在机器2上的完成时间和
            if(cf<bestf)
            {
                x[t]=x[t]+x[j]-(x[j]=x[t]);  //交换两个作业的位置
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

    printf("请输入作业数：\n");
    scanf("%d",&n);
    printf("请输入在各机器上的处理时间\n");
    for(i=1; i<=2; i++)
        for(j=1; j<=n; j++)
            scanf("%d",&m[j][i]);
    for(i=1; i<=n; i++)
        x[i]=i;
    Backtrack(1);
    printf("作业调度顺序：\n");
    for(i=1; i<=n; i++)
        printf("%d  ",bestx[i]);
    printf("\n");
    printf("处理时间：\n");
    printf("%d",bestf);
    return 0;
}
