#include<stdio.h>
static int count=0;/*����һ����̬��������¼�ݹ���ô���*/
//move��������ʾ�ڼ������Ӵ������ƶ�������
int move(int n, int x, int y){
        int m;
        printf("��%d�����Ӵ�%c-->%c\n",n,x+65,y+65);
        count++;
}


//hanio��������n�����Ӵ�A���Ƶ�C���Ĺ��̣�����B����
void hanoi(int n, int A, int B, int C){
        if(n==1)
            move(n,A,C);
        else{
            hanoi(n-1,A,C,B);
            move(n,A,C);
            hanoi(n-1,B,A,C);
        }
}

//������
int main()
{
    int n; //Hanoi's total plates
    printf("������������Ŀ : ");
    scanf("%d",&n);
    hanoi(n,0,1,2);
    printf("�ܹ�����:%d ",count);
}

