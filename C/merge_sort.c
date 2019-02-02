#include <stdio.h>

void Merge(int unsort[],int sort[], int first, int mid, int last)
{
    int i = first, j=mid+1, k = first;
    while(i!=mid+1 && j!=last+1)
    {
        if(unsort[i] > unsort[j])
            sort[k++] = unsort[j++];
        else
            sort[k++] = unsort[i++];
    }
    while(i != mid+1)
        sort [k++] = unsort[i++];
    while(j != last+1)
        sort [k++] = unsort[j++];
    for(i=first; i<=last; i++)
        unsort[i] = sort [i];
}

void MergeSort(int unsort[], int sort [], int first, int last)
{
    int mid;
    if(first < last)
    {
        mid = (first + last) / 2;
        MergeSort(unsort, sort , first, mid);
        MergeSort(unsort, sort , mid+1, last);
        Merge(unsort, sort , first, mid, last);
    }
}

int main(int argc, char * argv[])
{
    int a[8] = {42,96,23,89,48,75,36,30,57,61};
    int i, b[8];
    MergeSort(a, b, 0, 7);
    for(i=0; i<8; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
