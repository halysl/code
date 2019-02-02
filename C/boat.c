#include <stdio.h>
    #include <stdlib.h>
    void Loading(int C1,int* w,int num,bool* x,int** m){
        for (int i = 1; i < C1+1 ; i++ ) {
            if ( w[num] > i ) {
                m[num][i] = 0;
                x[num] = false;
            } else {
                m[num][i] = w[num];
                x[num] = true;
            }
        }

        for (int i1 = num - 1; i1 >= 2 ; i1--) {
            for (int j = 1; j <= C1 ; j++ ) {
                if ( w[i1] > j ) {
                    m[i1][j] = m[i1+1][j];
                    x[i1] = false;
                } else {
                    int temW = w[i1] + m[i1+1][ j - w[i1] ];
                    if ( temW > m[i1+1][j]  ) {
                        m[i1][j] =   temW ;
                        x[i1] = true;
                    }else{
                        m[i1][j] = m[i1+1][j];
                        x[i1] = false;
                    }
                }
            }
        }

        if ( w[1] > C1 ) {
            m[1][C1] = m[2][C1];
            x[1] = false;
        } else {
            int temW = m[2][ C1 - w[1] ] + w[1];
            if ( temW > m[1][C1]  ) {
                m[1][C1] = temW;
                x[1] = true;
            }else{
                m[1][C1] = m[2][ C1 ];
                x[1] = false;
            }
        }

    }

    void SolveLoading(int C2,bool* x,int* w,int num){
        int totalW = 0;
        int c1W = 0;/* 第一艘船总载重 */
		int i=1;
        for (i = 1; i <= num ; i++ )
{
             c1W += w[i];
             totalW += w[i];
        }
        if ( totalW-c1W > C2 ) {
            printf("没有合理的装载方案! :( ");
            return;
        }
        printf(" 装载方案如下:\n ");

        for (i = 1; i <= num ; i++ )
		{
             printf("%d ",i);
         }
        printf("\n总载重 %d \n",c1W);
       for (i = 1; i <= num ; i++ ) {
            if (  x[i]>1000 ) {
                printf("%d ",i);
            }
        }
     }
         int main(int argc,char* argv[]){
        int C1 = 0;
        int C2 = 0;
        int num = 0;
        bool* x = NULL;
        int** m = NULL;
        int* w = NULL;
        printf("输入第一艘船最大载重量:");
        scanf("%d",&C1);
        printf("输入第二艘船最大载重量:");
        scanf("%d",&C2);
        printf("输入货物个数");
        scanf("%d",&num);
        x = (bool*)malloc((num+1)*sizeof(bool));
        w = (int*)malloc((num+1)*sizeof(int));

        m = (int**)malloc((num+1)*sizeof(int*));
        for (int i = 0; i <= num ; i++ ) {
            m[i] = (int*)malloc( (C1+1) * sizeof(int) );
        }
        printf("分别输入货物重量（回车结束）：\n");

        for (i = 1; i <= num ; i++ ) {
            scanf("%d",w+i);
        }

        Loading(C1, w, num, x, m);
        SolveLoading(C2, x, w, num);
        return 0;
    }
