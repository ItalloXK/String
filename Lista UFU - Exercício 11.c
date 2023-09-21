#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*11. Faça um programa que receba do usuario uma string. O programa imprime a string sem
suas vogais*/
int main(){
	int i, j=0;//Índice para o novo vetor
	char auxiliar, string[100], stringSemVogal[100];
	printf("Digite a string: \n");
	fgets(string,100,stdin);

	for(i=0;  i< strlen(string); i++){
		auxiliar = string[i];
		if (auxiliar != 'a' && auxiliar != 'A' &&
            auxiliar != 'e' && auxiliar != 'E' &&
            auxiliar != 'i' && auxiliar != 'I' &&
            auxiliar != 'o' && auxiliar != 'O' &&
            auxiliar != 'u' && auxiliar != 'U') 
		{
            stringSemVogal[j]=auxiliar;	// Armazena o caractere no novo vetor
            j++;	// Incrementa o índice do novo vetor
        }
	}
	stringSemVogal[j] = '\0';	// Adiciona um caractere nulo no final para indicar o término da string
	
	printf("A nova string eh: %s", stringSemVogal);
  	return 0;
}
