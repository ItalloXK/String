#include <stdio.h>
#include <stdlib.h>
/*9. Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por ˆ
outro caractere ‘1’.*/
int main(){
	int i, contador = 0;
	char string[100];
	printf("Digite a string: \n");
	fgets(string,100,stdin);
	
	for(i=0; string[i]!='\0';i++){
		if(string[i]== '0'){
			string[i]='1';
		}
	}
  printf("A nova string eh: \n%s", string);
  return 0;
}
