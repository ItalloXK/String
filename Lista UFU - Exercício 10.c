#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*10. Faça um programa que receba uma palavra e a imprima de tras-para-frente.*/
int main(){
	int i, tamanho;
	char string[100], novaString[100];
	printf("Digite a string: \n");
	fgets(string,100,stdin);
	tamanho = strlen(string);
	
	printf("A nova string invertida eh: \n");
	for(i = tamanho-1; i>=0 ;i--){
	printf("%c", string[i]);
	}
  	return 0;
}
