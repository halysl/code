#include <stdio.h>
#include <math.h>

//求调和级数及一个极限函数的极限值
int main(void)
{
    float a,b,a_sum,b_sum;
    int i,j;

    while(i>0)
    {
        printf("请输入一个整数：");
        scanf("%d",&i);

        for(j=1,a_sum=0;j<=i;j++)
            a_sum += 1.0/j;

        for(j=1,b_sum=0;j<=i;j++)
            b_sum +=pow(-1,j+1)*(1.0/j);

        printf("1.0+1.0/2.0+1.0/3.0+...+1.0/i=%f\n",a_sum);
        printf("1.0-1.0/2.0+1.0/3.0-...+1.0/i=%f\n",b_sum);

    }
    printf("bye");
    return 0;
}
