#include<stdio.h>
#include<math.h>
int korni(int a,int b,int c)
{

    int discr;
    double x[2];
    

    discr = b*b - 4*a*c;
    
    x[0] = (b*(-1) - sqrt(discr))/(2*a); 
    x[1] = (b*(-1) + sqrt(discr))/(2*a); 

    
    printf("first koren - %0.1lf, second koren - %0.1lf", x[0], x[1]);
    
    return 0;
}
