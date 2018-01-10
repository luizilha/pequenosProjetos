// Aluno : 

/*
 Sintese
   Objetivo: setas
*/

#include <stdio.h>
#include <conio.c>
void menuPrincipal();
int mexeSetas(int setasA,int col, int saltos, int limite);

int main(void)
{
// Declaracoes
     int col=3, tecla;
// Instrucoes
     /*
     FAZER TESTES
     setasA=getch();
     setasB=getch();
     printf("%d | %d ",setasA, setasB);
     system("pause");
     */
     system("color 7F");
     do{
         system("cls");
         menuPrincipal();
         //SETAS
         gotoxy(col,3);
            printf("%c",16);
         gotoxy(col+9,3);
            printf("%c",17);
            
         tecla = getch();
         col = mexeSetas(tecla,col,11,36);
     }while(tecla != 13);
     system("cls");
     printf("            FIM");
     getch();
     return 0;
}

//Objetivo: mexer setas
int mexeSetas(int setasA,int col, int saltos, int limite){
                   int setasB;
     if(setasA == 224){
             setasB=getch();
             switch(setasB){
                 case 75:          //seta esquerda
                      if(col <= limite-33)
                         col = limite;
                      else
                         col-= saltos;
                      break;
                 case 77:          //seta direita
                      if(col >= limite)
                         col = 3;
                      else
                        col+= saltos;
             }
     }
     return col;
     
}

//Objetivo: apresentar o menu principal
void menuPrincipal(){
        int cont;
     for(cont=3;cont<46;cont++){
        if((cont==13) || (cont==24) || (cont==35)){
            gotoxy(cont,2);
               printf("%c",194);
            gotoxy(cont,4);
               printf("%c",193);
        }
        else{
           gotoxy(cont,2);
              printf("%c",196);
           gotoxy(cont,4);
              printf("%c",196);
        }
     }
     //pontas
     gotoxy(2,2);
        printf("%c",218);
     gotoxy(46,2);
        printf("%c",191);  
     gotoxy(2,4);   
        printf("%c",192);   
     gotoxy(46,4);   
        printf("%c",217);   
        
     gotoxy(1,3);
        printf(" %c   Mac    %c   iPod   %c  iPhone  %c  iPad    %c",179,179,179,179,179);
}

