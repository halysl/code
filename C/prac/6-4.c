#include <stdio.h>

/*输出形如
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
int main(void)
{
    char ch='A';
    int i,j;
    for(i=1;i<7;i++)                //控制行数
        {
        for(j=0;j<i;j++)            //控制每行字母个数
            printf("%c",ch++);      //ch每次操作递增
        printf("\n");
        }
    return 0;
}
