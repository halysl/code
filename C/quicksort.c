#include <stdio.h>
int quicksort(int *v, int left, int right)
    {   if(left < right)
        {   int key = v[left];
                int i = left;
                int j = right;
                while(i < j)
                    {   while(i < j && v[j] > key)
                        {j--;}
                        v[i] = v[j];
                        while(i < j && v[i] < key)
                        {i++;}
                        v[j] = v[i];
                    }
                v[i] = key;
                quicksort(v,left,i-1);
                quicksort(v,i+1,right);
        }
}
int main()
{
    int a[]={42,96,23,89,48,75,36,30,57,61};
    int i;
    quicksort(a,0,9);
    for(i=0;i<10;i++)
    {
         printf("%d  ",a[i]);
    }
}
