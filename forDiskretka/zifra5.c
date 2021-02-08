#include<stdio.h>

int main()
{
    int r,ost,i,n,count = 0,five;

    printf("Введите границу поиска чисел, имеющих хотя бы одну цифру 5: ");
    scanf("%d",&i);
    for ( n = 1; n <= i; n++){
	five = 0; r = n;
	while ( r != 0){
	    ost = r % 10;
	    if (ost == 5){five ++; break;}
	    r = r / 10;}
	if (five > 0){count++;}
    }
    printf("%d\n", count);
	
    return 0;
}
