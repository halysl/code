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
        printf("0-1��������~�ݹ�ⷨ\n");
        int m,n;
        int i=0;
            printf("�����뱳���ĸ���������Ʒ����:\n");
            scanf("%d,%d",&m,&n);
            printf("������ÿ����Ʒ����������Ʒ�ļ�ֵ��\n");
            for(i=1; i<=n; i++)
            {
                scanf("%d,%d",&w[i],&v[i]);
            }
            printf("���������Ž�Ϊ:%d\n",knapsack(n,m));
            printf("���Ž�������ѡ��ı���Ϊ:");
            for(i=1; i<=n; i++)
            {
                    if(x[i])
                        printf("%d",i);
            }
        return 0;
    }
