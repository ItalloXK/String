#include <stdio.h>
#include <stdlib.h>
//4 - faça um programa que leia um nome e imprima as 4 primeiras letras do nome
int main(){
	int i;
	char string[100];
	
	printf("digite a string: \n");
	fgets(string,100,stdin);
	printf("As 4 primeiras letras sao: \n");
		for(i=0; string[i]!='\0' && i<4; i++){
			printf("%c", string[i]);
		}
	return 0;
}
