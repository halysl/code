#include <stdio.h>
#include <math.h>

void main(void)
{
    float first_number,second_number;
    char suan;
    char ch;
    printf("����������\n");

    while(ch=getchar() != 'q')
    {
        printf("���������������������㣺");
        scanf("%f%c%f",&first_number,&suan,&second_number);
        switch(suan)
            {
                case '+':printf("\n%.4f\n",first_number+second_number);break;
                case '-':printf("\n%.4f\n",first_number-second_number);break;
                case '*':printf("\n%.4f\n",first_number*second_number);break;
                case '/':printf("\n%.4f\n",first_number/second_number);break;
                default:printf("�������\n");
            }
        printf("����q�˳�:");
        ch=getchar();
    }

    return 0;
}
