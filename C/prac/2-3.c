#include <stdio.h>
int main(void)
{
    int age,day;

    printf("please input you age:");
    scanf("%d",&age);
    day=365*age;
    printf("Your age is %d\nand you age-day is %d day\n",age,365*age);
}
