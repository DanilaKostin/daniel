#include<stdio.h>

int main()
{
    long long fact;
    int i;
    printf("Введите число, для которого находится факториал: ");
    scanf("%d", &i);
    fact = i;
    while (i != 1){ 
	fact *= (i - 1);
	i = i - 1;}
    printf("%lld\n", fact);
    return 0;
}
    
