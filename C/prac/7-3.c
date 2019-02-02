#include <stdio.h>

//输入n个数字，求出其中奇数和偶数的个数和平均值
int main(void)
{
    int num[100];
    int count_single=0;
    int count_double=0;
    int sum_single=0;
    int sum_double=0;
    int i;


    printf("请输入一些数字：\n");
    for(i=0;i<100;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]==0)
            break;
        if(num[i]%2==0)
        {
            count_double++;
            sum_double+=num[i];
        }
        else
        {
            count_single++;
            sum_single+=num[i];
        }
    }

    printf("你输入了%d个偶数，其平均值为%.2f\n",count_double,(float)sum_double/count_double);
    printf("你输入了%d个奇数，其平均值为%.2f\n",count_single,(float)sum_single/count_single);

    return 0;
}
