#include <stdio.h>

int main(void)
{
    float a;

    printf("\aplease input a float numble:");
    printf("______\b\b\b\b\b\b");
    scanf("%f",&a);
    printf("The float num in Decimal form is %f\n",a);
    printf("The float num in Exponential form is %e\n",a);
    printf("The float num in p form is %a\n",a);

    return 0;
}
