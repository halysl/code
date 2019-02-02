#include <stdio.h>

int main(void)
{
    int count,sum,day;
    count = 0;
    sum = 0;

    printf("input days,Calculate total income(the first day one yuan,the second day two yuan)program\n");
    printf("please input day:");
    scanf("%d",&day);
    while(count++<day)
    {
        sum = sum + count;
    }
    printf("%d day total income are %d yuan.",day,sum);

    return 0;
}
