#include <stdio.h>

float cube(float n);

int main(void)
{
    float m;

    printf("����һ���������������������ĳ���\n");
    printf("����һ��������:");
    scanf("%f",&m);
    printf("%.2f��������%.4f.\n",m,cube(m));

    return 0;

}

float cube(float n)
{
    float n3;
    n3 = n * n * n;
    return n3;
}
