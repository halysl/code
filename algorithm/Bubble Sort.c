//冒泡排序，指的是未归位的数分别于自己的下一位进行比较
#include <stdio.h>

int main()
{
	int a[100],i,j,n,temp;

	printf("please input number:");
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	//排序
	for (i = 0; i < n-1; ++i)       //n个数，排n-1趟
	{
		for (j = 0; j < n-i; ++j)   //排序对称
		{
			if (a[j]>a[j+1])        //左右两数比较并交换位置
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for (i = 0; i < n; ++i)
	{
		printf("%d ",a[i] );
	}
}
