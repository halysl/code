#include <stdio.h>
//输入两个浮点数，计算(a-b)/(a*b)=
int main(void)
{
    float a,b;
    char ch;

    while(ch!='N')
    {
        printf("请输入一个浮点数：");
        scanf("%f",&a);
        printf("请输入另一个浮点数：");
        scanf("%f",&b);
        printf("(a-b)/(a*b)=%f\n",(a-b)/(a*b));
        printf("是否退出（Y/N）：");
        getchar();
        scanf("%c",&ch);
    }
}
