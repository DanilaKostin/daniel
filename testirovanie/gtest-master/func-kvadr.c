#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c, discr;
    double x[2];
    printf("Введите a, b, c:");
    scanf("%d %d %d", &a,&b,&c);

    discr = b*b - 4*a*c;
    
    x[0] = (b*(-1) - sqrt(discr))/(2*a); 
    x[1] = (b*(-1) + sqrt(discr))/(2*a); 

    
    printf("first koren - %0.3lf, second koren - %0.3lf", x[0], x[1]);
    
    return 0;
}
