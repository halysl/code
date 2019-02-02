#include <stdio.h>

//由用户定义上限和下限，分行输出下限到上限中的每一个整数及其平方和立方

int main(void)
{
    int max,min,i;

    printf("请输入一个整数上限：");
    scanf("%d",&max);
    printf("请输入一个整数下限：");
    scanf("%d",&min);

    printf("整数        平方        立方\n");

    for(i=min;i<max;i++)
        printf("%-12d%-12d%-12d\n",i,i*i,i*i*i);

    return 0;

}
