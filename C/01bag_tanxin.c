    #include<stdio.h>
    #define N 20
    typedef struct A{
    double avg; //��Ʒ��λ������ֵ
    int index;  //��Ʒ�±�
    }a[100];
    int main()
    {
        int n,c,i;
        int w[N],v[N];
        float vp[N];
        printf("�����뱳���������������Ʒ��:\n");
        scanf("%d,%d",&c,&n);
        printf("��ֱ�������Ʒ������,��ֵ:\n");
        for(i=0;i<n;i++)
         {scanf("%d,%d",&w[i],&v[i]);
         a[i].avg=v[i]*1.0/w[i];
         a[i].index=i;
         }
         for(i=0;i<n;i++)
         {
             printf("����[%d]=%d,��ֵ[%d]=%d,��λ��ֵ[%d]=%f\n",i,w[i],i,v[i],i,a[i].avg);
         }
         a[i].avg=v[i]*1.0/w[i];
         a[i].index=i;
    }
    void InsertSort(int vp[], int n)
{
    int i;
    for(i= 1; i<n; i++){
        if(vp[i] < vp[i-1]){
            int j= i-1;
            int x = vp[i];
            vp[i] = vp[i-1];
            while(x < vp[j]){
                vp[j+1] = vp[j];
                j--;
            }
            vp[j+1] = x;
        }
    }

}
void exchange(A x1,A x2){
    double temp1=x1.avg;
    x1.avg=x2.avg;
    x2.avg=temp1;
    int temp2=x1.index;
    x1.index=x2.index;
    x2.index=temp2;
}
