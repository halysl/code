#include <stdio.h>
//输入两个浮点数，计算(a-b)/(a*b)=，函数调用

float fuc(float a,float b);
int main(void)
{
    float a,b;
    char ch;

    while(ch!='Y')
    {
        printf("请输入一个浮点数：");
        scanf("%f",&a);
        printf("请输入另一个浮点数：");
        scanf("%f",&b);
        printf("(a-b)/(a*b)=%f\n",fuc(a,b));
        printf("是否退出（Y/N）：");
        getchar();
        scanf("%c",&ch);
    }
}

float fuc(float a,float b)
{
    return (a-b)/(a*b);
}
