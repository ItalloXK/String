#include <stdio.h>
#include <stdlib.h>
/*8 - Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo: “0011001” -> 3*/
int main(){
	int i, contador = 0;
	char string[100];
	printf("Digite a string: \n");
	fgets(string,100,stdin);
	
	for(i=0; string[i]!='\0';i++){
		if(string[i]== '1'){
			contador++;
		}
	}
  printf("A quantidade de numeros 1's eh: %d", contador);
  return 0;
}
