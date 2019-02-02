#include <stdio.h>
/*输出形如
***A
**ABA
*ABCBA
的图形，其中“*”代表空格，行数由用户定义
*/
int main(void)
{
    int i,j,k;
    char input;

    printf("please input a capital letters:");      //输入大写字母以定义行数
    scanf("%c",&input);

    for(i=0;i<(int)(input-'A'+1);i++)               //控制行数
        {
        for(j=1;j<=(int)(input-'A'+1-i);j++)        //打印空格
        printf(" ");
        for(k=0;k<=2*i;k++)                         //打印字母
        if(k<=i)
            putchar('A'+k);
        else
            putchar('A'+2*i-k);
        printf("\n");
        }

}
