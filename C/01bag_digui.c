#include <stdio.h>
    #define W 100
    #define N 20
    int w[N];
    int v[N];
    int x[N];
    int knapsack(int n,int m)
    {
        if (n==0||m==0)
        {
            return 0;
        }
        else if ((m>=w[n])&&(knapsack(n-1,m)<(knapsack(n-1,m-w[n])+v[n])))
        {
            x[n]=1;
            return knapsack(n-1,m-w[n])+v[n];
        }
        else
        {
            x[n]=0;
            return knapsack(n-1,m);
        }
    }
    int  main()
    {
        printf("0-1背包问题~递归解法\n");
        int m,n;
        int i=0;
            printf("请输入背包的负重量和物品个数:\n");
            scanf("%d,%d",&m,&n);
            printf("请输入每个物品的重量和物品的价值：\n");
            for(i=1; i<=n; i++)
            {
                scanf("%d,%d",&w[i],&v[i]);
            }
            printf("背包的最优解为:%d\n",knapsack(n,m));
            printf("最优解条件下选择的背包为:");
            for(i=1; i<=n; i++)
            {
                    if(x[i])
                        printf("%d",i);
            }
        return 0;
    }
