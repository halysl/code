#include <stdio.h>

int main(void)
{
    double sec=3.156e7;
    int age;

    printf("\aplease input your age:");
    scanf("%d",&age);
    printf("Your age is %d years or %.0f seconds.",age,age*sec);

    return 0;
}
