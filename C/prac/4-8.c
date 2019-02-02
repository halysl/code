#include <stdio.h>
#define gallon_to_litre 3.785
#define mile_to_kilometer 1.609

int main(void)
{
    float distance,gasoline,m;

    printf("请输入旅行的里程：      英里，");
    printf("\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%f",&distance);
    printf("请输入总耗油量：    加仑。");
    printf("\b\b\b\b\b\b\b\b\b\b");
    scanf("%f",&gasoline);

    m=distance/gasoline;
    printf("消耗每加仑汽油行驶的距离是：    英里。");
    printf("\b\b\b\b\b\b\b\b\b%.1f",m);

    printf("\n");

    m=(gasoline*gallon_to_litre)/((distance*mile_to_kilometer)/100);
    printf("行驶100公里消耗的油量为：     升。");
    printf("\b\b\b\b\b\b\b\b%.1f",m);

}
