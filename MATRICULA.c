/*
ESQUEMA MATRICULA
 */


#include <stdio.h>
#define MAX 3

int main(int argc, char **argv)
{
	//declaracoes
		int valor[MAX];
		int  cont, cont2;
	//inicio
	for(cont=0;cont<MAX;cont++){
		printf("Informe %d matricula qualquer: ",cont+1);
		scanf("%d",&valor[cont]);
		if(cont > 0){
			cont2=0;
			while(cont > cont2){
				while(valor[cont] == valor[cont2]){
					printf("Valor ja existe. Informe novamente: ");
					scanf("%d",&valor[cont]);
					cont2 =0;
				}
				cont2++;				
			}
		}
	}
	for(cont=0;cont<MAX;cont++)
		printf("%d\n",valor[cont]);
	return 0;
}

