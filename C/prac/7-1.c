#include <stdio.h>

//����һ���ַ�������м����ո񣬻��з�������
int main(void)
{
    int cs,cn,co;
    char ch;
    cs=cn=co=0;

    printf("������һЩ�ַ�����#��β��\n");
    while((ch = getchar())!='#')
        {
            if(ch == ' ' )
                {cs++;}
            else if(ch == '\n')
                {cn++;}
            else
                {co++;}
         }
    printf("%d���ո�\n%d������\n%d�������ַ�",cs,cn,co);

    return 0;

}
