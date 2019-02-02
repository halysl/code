#include <stdio.h>
#define wages 1000
#define tax1 45
#define tax2 75

int main(void)
{
    int time;
    double wage;

    printf("一周工作时间（h）：_______");
    printf("\b\b\b\b\b\b");
    scanf("%d",&time);
    if(time<30)
        printf("你的税后工资为%.2f",time*wages*0.85);
    else if(time<40 && time>30)



}
