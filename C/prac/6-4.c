#include <stdio.h>

/*�������
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
    for(i=1;i<7;i++)                //��������
        {
        for(j=0;j<i;j++)            //����ÿ����ĸ����
            printf("%c",ch++);      //chÿ�β�������
        printf("\n");
        }
    return 0;
}
