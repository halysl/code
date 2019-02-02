  #include <stdio.h>
#include <stdlib.h>
int calendar[100][100];  //日程表数组
void game(int k)
{
 int p,q,m,number,i,j;
 number=k;
 p=m=1;
 calendar[1][1]=2;
 calendar[2][1]=1;
 while(m<number)
 {
   ++m;
   p=2*p;
   q=2*p;
     //填充日程表的左下角
   for(i=p+1;i<q;++i)
      for(j=1;j<p;++j)
        calendar[i][j]=calendar[i-p][j]+p;
     //填充日程表的右上角
   calendar[1][p]=p+1;
   for(i=2;i<=p;++i)
      calendar[i][p]=calendar[i-1][p]+1;
   for(j=p+1;j<q;++j)
    {
      for(i=1;i<p;++i)
        calendar[i][j]=calendar[i+1][j-1];
      calendar[p][j]=calendar[1][j-1];
    }
       //填充日程表的右下角
    for(j=p;j<q;++j)
       for(i=1;i<=p;++i)
         calendar[calendar[i][j]][j]=i;
 }
}
int main()
{
  int i,j,number,flag,k;
  printf("请输入参赛人数：(必须是2的k次幂) ");
  scanf("%d",&number);
  flag=1;
  k=0;
  while(flag!=number){
   k++;
   flag*=2;
  }
  game(k);
    //输出二维表
  for(i = 1;i <= number;i++)
        {
            for(j = 1;j < number;j++)
                printf("%4d",calendar[i][j]);
            printf("\n");
        }
        printf(" ");
  system("pause");
  return 0;
}
