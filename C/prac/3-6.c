#include <stdio.h>

int main(void)
{
    float Quart;

    printf("\aYou have        quart water.");
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b______\b\b\b\b\b\b");
    scanf("%f",&Quart);
    printf("%.0f quart water is %d gram and have %.2e Water molecules.",Quart,(int)Quart*950,(int)Quart*950/(3.0e-23));

    return 0;

}
