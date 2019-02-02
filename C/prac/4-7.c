#include <stdio.h>
#include <float.h>

int main(void)
{
    double m=1.0/3.0;
    float n=1.0/3.0;

    printf("m=%.6f\nn=%.6f\n",m,n);
    printf("m=%.12f\nn=%.12f\n",m,n);
    printf("m=%.16f\nn=%.16f\n",m,n);
    printf("\nFLT_DIG=%f\nDBL_DIG=%f",FLT_DIG,DBL_DIG);

    return 0;
}
