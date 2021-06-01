#include <stdio.h>

int main (){
	
	char palabra[30];
	int i=0;
	
	printf("Digite  una palabra: ");
	gets(palabra);
	
	while(palabra[i] !='\0'){
		
		
		i++;
	}
	
	
	printf("\n La palabra tiene: %i letras",i);
	
	printf("\n La palabra escrita al reves es ");
	
	while(i>=0){
		printf("%c",palabra[i--]);
	}
	
	
	
	return 0;
}
