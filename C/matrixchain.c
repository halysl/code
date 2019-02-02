#include <stdio.h>
#define N 100//定义最大连乘的矩阵个数为100个
void matrixChain (int p[],int m[N+1][N+1],int s[N+1][N+1])/*用m[i][j]二维数组来存储Ai*......Aj的最小数乘次数，用s[i][j]来存储使Ai......Aj获得最小数乘次数对应的断开位置k，需要注意的是此处的N+1非常关键，虽然只用到的行列下标只从1到N但是下标0对应的元素默认也属于该数组，所以数组的长度就应该为N+1*/
{
	int n=N;//定义m,s数组的都是n*n的，不用行列下标为0的元素，但包括在该数组中
	int i,r,k;
	for (i=1;i<=n;i++)
		m[i][i]=0; /*将矩阵m的对角线位置上元素全部置0，此时应是r=1的情况，表示先计算第一层对角线上个元素的值*/
	for (r=2;r<=n;r++)//r表示斜对角线的层数，从2取到n
	{
		for (i=1;i<=n-r+1;i++)//i表示计算第r层斜对角线上第i行元素的值
		{
			int j=i+r-1;//j表示当斜对角线层数为r，行下标为i时的列下标
			m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];//计算当断开位置为i时对应的数乘次数
			s[i][j]=i;//断开位置为i
			for (k=i+1;k<j;k++)
			{
				int t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];/*计算当断开位置k为从i到j（不包括i和j）的所有取值对应的(Ai*......*Ak)*(Ak+1*.......Aj)的数乘次数*/
				if (t<m[i][j])
				{
					m[i][j]=t;//将Ai*......Aj的最小数乘次数存入m[i][j]
					s[i][j]=k;//将对应的断开位置k存入s[i][j]
				}
			}
		}
	}
}
void traceback (int i,int j,int s[][N+1])//用递归来实现输出得到最小数乘次数的表达式
{
	if (i==j)
	{
		printf ("A%d",i);
	}
	else
	{
		printf ("(");
	    traceback (i,s[i][j],s);
	    traceback(s[i][j]+1,j,s);
	    printf (")");
	}
}
void main ()
{
	int n;//用来存储矩阵的个数
	int q[2*N];/*用q数组来存储最原始的输入（各矩阵的行和列），主要目的是为了检验这N个矩阵是否满足连乘的条件*/
	int p[N+1],flag=1;/*用p[i-1],p[i]数组来存储A的阶数，flag用来判断这N个矩阵是否满足连乘*/
	int m[N+1][N+1];// 用m[i][j]二维数组来存储Ai*......Aj的最小数乘次数
	int s[N+1][N+1];// 用s[i][j]来存储使Ai......Aj获得最小数乘次数对应的断开位置k
	printf ("请输入矩阵的个数（小于100）:");
	scanf ("%d",&n);
	int i,j;
	for (i=0;i<=2*n-1;i++)//各矩阵的阶数的输入先存入数组q中接受检验
	{
		if (i%2==0)
		{
			printf ("               \n");
			printf ("请输入A%d的行:",(i/2)+1);
		}
		else
		{
			printf ("          列:");
		}
	   scanf ("%d",&q[i]);
	}
	for (i=1;i<=2*n-2;i++)//矩阵连乘条件的检验
	{
        if (i%2!=0&&q[i]!=q[i+1])
		{
			flag=0;
			break;
		}
	}
	for (j=1;j<=n-1;j++)
	{
			p[j]=q[2*j];
	}
	if (flag!=0)
	{
	    p[0]=q[0];
	    p[n]=q[2*n-1];
    	matrixChain (p,m,s);
    	printf ("式子如下:\n");
    	traceback(1,n,s);
    	printf ("\n");
     	printf ("最小数乘次数为%d\n",m[1][n]);
	}
	else
	{
		printf ("这%d个矩阵不能连乘!\n",n);
	}
	}
