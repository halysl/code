#include <stdio.h>
#include <math.h>

void main(void)
{
    float first_number,second_number;
    char suan;
    char ch;
    printf("简单四则运算\n");

    while(ch=getchar() != 'q')
    {
        printf("请输入两个数的四则运算：");
        scanf("%f%c%f",&first_number,&suan,&second_number);
        switch(suan)
            {
                case '+':printf("\n%.4f\n",first_number+second_number);break;
                case '-':printf("\n%.4f\n",first_number-second_number);break;
                case '*':printf("\n%.4f\n",first_number*second_number);break;
                case '/':printf("\n%.4f\n",first_number/second_number);break;
                default:printf("输入错误\n");
            }
        printf("输入q退出:");
        ch=getchar();
    }

    return 0;
}
