#include <stdio.h>

int main(void)
{
    float cup;
    float pint,ounce,big_spoon,tea_spoon;

    printf("You have     cup.");
    printf("\b\b\b\b\b\b\b\b");
    scanf("%f",&cup);

    pint=0.5*cup;
    ounce=8*cup;
    big_spoon=2*ounce;
    tea_spoon=3*big_spoon;

    printf("There is %.1f pint\n",pint);
    printf("There is %.0f ounce\n",ounce);
    printf("There is %.0f big_spoon\n",big_spoon);
    printf("There is %.0f tea_spoon\n",tea_spoon);

    return 0;
}
