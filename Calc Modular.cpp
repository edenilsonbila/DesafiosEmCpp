#include <stdio.h>
#include <stdlib.h>

float a,b,r;

void entrada(){
     printf("digite o primeiro numero: \n");
     scanf("%f",&a);
     printf("digite o segundo numero: \n");
     scanf("%f",&b);
     }
     
     float adicao(){
           r = a+b;
           return(r);
           }
           
           float subtracao(){
           r = a-b;
           return(r);
           }
           
           float divisao(){
           r = a/b;
           return(r);
           }
           
           float multiplicacao(){
           r = a*b;
           return(r);
           }
           
     main(){
            int op;
            printf("Digite a operacao: 1- Adicao, 2- Subtracao, 3 - Multiplicacao, 4- Divisao\n");
            scanf("%d",&op);
            entrada();
            switch (op){
                   case 1:
                        adicao();
                        printf("Resultado = %f",r);
                        break;                   
                   case 2:
                        subtracao();
                        printf("Resultado = %f",r);
                        break;
                   case 3:
                        multiplicacao();
                        printf("Resultado = %f",r);
                        break;
                   case 4:
                        divisao();
                        printf("Resultado = %f",r);
                        break;
                        default:
                                printf("Operacao incorreta");
                   }
                   system("pause>null");
            }
