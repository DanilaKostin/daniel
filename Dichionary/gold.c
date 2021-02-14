#include <string.h>
#include <stdio.h>



int main()

{

    // Взять любые две строки

    char s1[] = "Fun with STL";

    char s2[] = "STL";

    char* p;



    // Находим первое вхождение s2 в s1

    p = strstr(s1, s2);



    // печатает результат

    if (p) {

	strcpy(p, "Strings");

	printf("%s", s1);

    } else

	printf("String not found\n");



    return 0;

}

if (start == 0 && end==1){
    if (strstr(current_line, copy) !=0 ){/*Правь тут*/
	for (i = (int)(strstr(current_line,copy)); copy[i]!='\n';i++)
	{ if (current_line[i] == copy[i])
		continue;
	    else break;
	}
	if ((size_t)(i+1) ==(strlen(current_line)))
	    matched_entry = 1;
	else matched_entry = 0;


    }
}
if (start==0 && end==1){
    if (strstr(current_line,copy) != 0){ flag =0;k=0;
	for (i=0; copy[k]!='\n';i++)
	{ if (current_line[i] == copy[k]){
		k++;
	    }
	    else {if (copy[0]==current_line[i] ){
		    i=-1;}
		k=0;}

	}
	if ((size_t)k==strlen(copy))
	    matched_entry = 1;
	else matched_entry = 0;
    }
}
