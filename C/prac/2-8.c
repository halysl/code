#include <stdio.h>
one_three();
two();

int main(void)
{
    printf("starting now!\n");
    one_three();
    printf("done!");

    return 0;
}

one_three()
{
    printf("one\n");
    two();
    printf("three\n");
}

two()
{
    printf("two\n");
}
