  #include <stdio.h>
#include <stdlib.h>
int calendar[100][100];  //�ճ̱�����
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
     //����ճ̱�����½�
   for(i=p+1;i<q;++i)
      for(j=1;j<p;++j)
        calendar[i][j]=calendar[i-p][j]+p;
     //����ճ̱�����Ͻ�
   calendar[1][p]=p+1;
   for(i=2;i<=p;++i)
      calendar[i][p]=calendar[i-1][p]+1;
   for(j=p+1;j<q;++j)
    {
      for(i=1;i<p;++i)
        calendar[i][j]=calendar[i+1][j-1];
      calendar[p][j]=calendar[1][j-1];
    }
       //����ճ̱�����½�
    for(j=p;j<q;++j)
       for(i=1;i<=p;++i)
         calendar[calendar[i][j]][j]=i;
 }
}
int main()
{
  int i,j,number,flag,k;
  printf("���������������(������2��k����) ");
  scanf("%d",&number);
  flag=1;
  k=0;
  while(flag!=number){
   k++;
   flag*=2;
  }
  game(k);
    //�����ά��
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
