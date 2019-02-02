#include <stdio.h>

int main(void)
{
    int i,n;

    printf("输入一个整数，输出比它大10的所有整数程序\n");
    printf("请输入一个整数：");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        printf("%d ",n+i);
    }

    return 0;
}
