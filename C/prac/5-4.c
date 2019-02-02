#include <stdio.h>
#define change 0.3937008

int main(void)
{
    float tall_cm,tall_inch;
    tall_cm=0;

    printf("输入身高（厘米），转换成英寸的程序\n");
    while(1)
    {
        if(tall_cm>=0)
        {
            printf("请输入身高（厘米）：");
            scanf("%f",&tall_cm);
            tall_inch = tall_cm * change;
            printf("%.2fcm身等于%.2finch身高。\n",tall_cm,tall_inch);
        }

        if(tall_cm<0)
        {
            printf("再见。");
            return 0;

        }
    }


    return ;
}
