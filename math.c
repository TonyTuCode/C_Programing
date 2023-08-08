#include <stdio.h>
#include <math.h>

int main()
{
    double sqr = sqrt(9);
    double p = pow(2,4);
    int rou = round(3.14);
    int ce = ceil(3.14);
    int fl = floor(3.99);
    double abs = fabs(-100);
    double ln = log(3); //meaning ln(3)
    double sn = sin(45);
    double cs = cos(45);
    double tn = tan(45);

    printf("9 sqrt is %lf\n",sqr);
    printf("2^4 is %lf\n",p);
    printf("3.14 round is %d\n",rou);
    printf("3.14 ceil is %d\n",ce);
    printf("3.99 floor is %d\n",fl);
    printf("-100 fabs is %lf\n",abs);
    printf("log(3) is %lf\n",ln);
    printf("sin(45) is %lf\n",sn);
    printf("cos(45) is %lf\n",cs);

}
