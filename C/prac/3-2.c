#include <stdio.h>

int main(void)
{
    char ch;

    printf("\aplease input a num:");
    printf("______\b\b\b\b\b\b");
    scanf("%d",&ch);
    printf("The Ascii number %d is %c.\n",ch,ch);

    return 0;
}
