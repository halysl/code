#include <stdio.h>

//输入两个数，计算两个整数之间所有整数的平方和
int main(void)
{
    int lower,upper,i;
    int sum=0;
    char ch='0';

    while(lower<upper)
        {
            printf("please input lower and upper interger limits:");
            scanf("%d%d",&lower,&upper);
            if(lower<upper)
                {
                    for(i=lower;i<=upper;i++)
                        sum+=i*i;
                    printf("从%d到%d中所有整数的平方和为%d\n",lower,upper,sum);
                }
            else
                printf("done\n");
        }
        printf("bye\n");

        return 0;

}
