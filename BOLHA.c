/*
METODO DA BOLHA 
 */


#include <stdio.h>
#define MAX 3

int main(int argc, char **argv)
{
	//declaracoes
		int valor[MAX];
		int  cont, cont2, subs;
	//inicio
	for(cont=0;cont<MAX;cont++){
		printf("Informe %d valor qualquer: ",cont+1);
		scanf("%d",&valor[cont]);
	}
	for(cont=0;cont<MAX;cont++){
		if(cont > 0){
			for(cont2=0;cont2<cont;cont2++){
				if(valor[cont] < valor[cont2]){
					subs = valor[cont];
					valor[cont] = valor[cont2];
					valor[cont2] = subs;
				}
			}
		}
	}
	for(cont=0;cont<MAX;cont++)
		printf("%d\n",valor[cont]);
	return 0;
}

