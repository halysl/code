#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 2000
   void main( )
    {
        double f(x);
        double x[N],y[N];
        int i,m=0;
        srand((unsigned)time(NULL));
        for(i=0;i<N;i++)
        {  x[i]=(double)rand( )/RAND_MAX+1;
           y[i]=(double)rand( )/RAND_MAX;
        }
        for(i=0;i<N;i++)
        {  if(y[i]<=f(x[i]))
              m++; }
        printf("%8.6f\n",(double)m/N); }
    double f(double x)
    {
        return (double)sin(x)/x;
    }


