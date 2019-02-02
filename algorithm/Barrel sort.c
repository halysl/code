//对一定范围的数进行排序，用桶排序
#include <stdio.h>

int main()
{
	int n,t,i,j;
	int a[100]={0};
	printf("please input anumber:");
	scanf("%d",&n);
	for (i = 1; i <= n; ++i)
	{
		scanf("%d",&t);
		a[t]++;                 //在对应的桶上面flag+1
	}
	for (i = 1; i <= n; ++i)
	{
		if (a[i]!=0)
		{
			for(j = 1;j <= a[i];j++)     //桶上有几个flag，打印几次
				printf("%d ", i );
		}
	}
}
