    #include<stdio.h>
    int c,n,w[5100],v[5100],x[5100];
    typedef struct A{
        double avg; //��Ʒ��λ������ֵ
        int index;  //��Ʒ�±�
    }a[100];
    void exchange(A x1,A x2){   //�������ṹ�����ֵ
        double temp1=x1.avg;
        x1.avg=x2.avg;
        x2.avg=temp1;
        int temp2=x1.index;
        x1.index=x2.index;
        x2.index=temp2;
    }
    int main(){


        int num=1;
        while(!feof(fp1)){
            fscanf(fp1,"%d%d",&c,&n);
            int i,j;
            for(i=1;i<=n;i++){
                fscanf(fp1,"%d%d",&w[i],&v[i]);
                a[i].avg=v[i]*1.0/w[i];
                a[i].index=i;
                x[i]=0;
            }
            for(i=n;i>0;i--){  //����Ʒ����λ������ֵ��������
                for(j=1;j<i;j++){
                    if(a[j].avg<a[j+1].avg){
                        exchange(a[j],a[j+1]);
                    }
                }
            }
            int sum=0,ans=0;
            for(i=1;i<=n;i++){
                if(sum+w[a[i].index]<=c){ //���������Ʒֱ���Ų��¼���
                    sum+=w[a[i].index];
                    ans+=v[a[i].index];
                    x[a[i].index]=1;
                }
            }
            fprintf(fp2,"��%d������:\n",num++);
            fprintf(fp2,"%d\n",ans);
            for(i=1;i<=n;i++){
                fprintf(fp2,"%d %d\n",i,x[i]);
            }
        }

    }
