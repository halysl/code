#include <stdio.h>
/*�������
***A
**ABA
*ABCBA
��ͼ�Σ����С�*������ո��������û�����
*/
int main(void)
{
    int i,j,k;
    char input;

    printf("please input a capital letters:");      //�����д��ĸ�Զ�������
    scanf("%c",&input);

    for(i=0;i<(int)(input-'A'+1);i++)               //��������
        {
        for(j=1;j<=(int)(input-'A'+1-i);j++)        //��ӡ�ո�
        printf(" ");
        for(k=0;k<=2*i;k++)                         //��ӡ��ĸ
        if(k<=i)
            putchar('A'+k);
        else
            putchar('A'+2*i-k);
        printf("\n");
        }

}
