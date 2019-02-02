#include <stdio.h>
int a[100],n;

void quick_sort(int left,int right)
{
	int i,j,t,temp;

	if(left > right)
		return 0;

	temp = a[left];
	i = left;
	j = right;

	while(i!=j)
	{
		while(a[j] >= temp && i<j)
			j--;
		while(a[i] <= temp && i<j)
			i++;

		if (i<j)
		{
			t = a[j];
			a[j] = a[i];
			a[i] = t;
		}
	}
//基准数归位
	a[left] = a[i];
	a[i] = temp;

	quick_sort(left,i-1);
	quick_sort(i+1,right);
}



int main()
{
    int i;
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	quick_sort(0,n);

	for (i = 0; i < n; ++i)
	{
		printf("%d ",a[i] );
	}

	return 0;
}
