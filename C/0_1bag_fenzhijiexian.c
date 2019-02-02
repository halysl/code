#include<stdio.h>
int c[10][100];/*对应每种情况的最大价值*/
int knapsack(int m,int n)
{
int i,j,w[10],p[10];
printf("请输入每个物品的重量,价值：\n");
for(i=1;i<=n;i++)
scanf("%d,%d",&w[i],&p[i]);
for(i=0;i<10;i++)
for(j=0;j<100;j++)
c[i][j]=0;/*初始化数组*/
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
{
if(w[i]<=j)/*如果当前物品的容量小于背包容量*/
{
if(p[i]+c[i-1][j-w[i]]>c[i-1][j])
/*如果本物品的价值加上背包剩下的空间能放的物品的价值*/
/*大于上一次选择的最佳方案则更新c[i][j]*/
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
printf("0-1背包问题~分支界限解法\n");
int m,n;
int i,j;
printf("请输入背包的承重量,物品的总个数：\n");
scanf("%d,%d",&m,&n);
printf("旅行者背包能装的最大总价值为%d",knapsack(m,n));
printf("\n");
return 0;
}
