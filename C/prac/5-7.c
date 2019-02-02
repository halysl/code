#include <stdio.h>

float cube(float n);

int main(void)
{
    float m;

    printf("输入一个浮点数，计算其立方的程序\n");
    printf("输入一个浮点数:");
    scanf("%f",&m);
    printf("%.2f的立方是%.4f.\n",m,cube(m));

    return 0;

}

float cube(float n)
{
    float n3;
    n3 = n * n * n;
    return n3;
}
