#include <stdio.h>

//������������������������֮������������ƽ����
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
                    printf("��%d��%d������������ƽ����Ϊ%d\n",lower,upper,sum);
                }
            else
                printf("done\n");
        }
        printf("bye\n");

        return 0;

}
