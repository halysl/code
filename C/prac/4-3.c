#include <stdio.h>

int main(void)
{
    float i;

    printf("please input a float number:");
    scanf("%f",&i);
    printf("The number is %3.1f!\n",i);
    printf("The number is %3.3e!\n",i);

    return 0;
}
