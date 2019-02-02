#include <stdio.h>

//输入八个数，倒序输出
int main(void)
{
    int a[8];
    int i;

    printf("请输入8个整数：");
    for(i=0;i<8;i++)
        scanf("%d",&a[i]);

    printf("倒序输出结果为：");

    for(i=7;i>=0;i--)
        printf("%d ",a[i]);

    return 0;
}
