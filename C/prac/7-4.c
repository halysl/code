#include <stdio.h>


//����һ���ַ�����������Ӧ��ת�������ת������������
int main(void)
{
    char ch[100];
    int count=0;
    int i;

    printf("������һЩ�ַ�����\n");
    for(i=0;i<100;i++)
    {
        scanf("%c",&ch[i]);
        if(ch[i]=='#')
            break;
        else if(ch[i]=='.')
        {
            printf("!");
            count++;
        }
        else if(ch[i]=='!')
        {
            printf("!!");
            count++;
        }
        else
            printf("%c",ch[i]);
    }

    printf("ת����%d�Ρ�",count);

    return 0;
}
