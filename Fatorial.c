#include <stdio.h>
#include <stdlib.h>

main(){
       // Declaração de variaveis
       int i, f, num,d;
       
       //Atribuição de valores
       printf("Digite um numero para fazer o fatorial: ");
       scanf("%d",&num);
       
       /*Primeiro numero do decremento, Vai dimunuindo exemplo num=5 , d = 5 - 1(4) no for
       no for este valor vai decrementando 5,4,3,2,1
       */
       d = num - 1;
       
       //Faz a primeira operação antes de entrar no for, Pos o F sera utilizado para os outros resultados
       f = num * d;
       printf("%d * %d = %d",num,d,f);
       d--;
       
       //Entra no laço e vai decrementando o D e faz o resultado(f) vezes o D exemplo 6*5 = 30(f), 30*4,3*120 e etc.
       for(i=0;i<num-2;i++){
       printf("\n%d * %d = ",f,d);
                             f = f*d;
                             printf("%d",f);
                             d--; 
                             }
                             printf("\n\nFatorial de %d = %d",num,f);
       system("pause>null");
       }
