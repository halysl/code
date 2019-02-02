#include<stdio.h>
static int count=0;/*定义一个静态变量，记录递归调用次数*/
//move函数，表示第几个盘子从哪里移动到哪里
int move(int n, int x, int y){
        int m;
        printf("第%d个盘子从%c-->%c\n",n,x+65,y+65);
        count++;
}


//hanio函数，将n个盘子从A座移到C座的过程（借助B座）
void hanoi(int n, int A, int B, int C){
        if(n==1)
            move(n,A,C);
        else{
            hanoi(n-1,A,C,B);
            move(n,A,C);
            hanoi(n-1,B,A,C);
        }
}

//主函数
int main()
{
    int n; //Hanoi's total plates
    printf("请输入盘子数目 : ");
    scanf("%d",&n);
    hanoi(n,0,1,2);
    printf("总共步数:%d ",count);
}

