//Fibonacci
#include <stdio.h>
#include <stdlib.h>
main(){
       //Este é o primeiro numero do Fibonacci
       int i, menor = 1, maior = 1, res;
       
       //Primeira Operação antes do For ( 1 + 1 = 2)
       res = menor + maior;
       
       //Printa na tela
       printf("1 + 1 = %d \n",menor); // menor = 1
       printf("2 + 1 = %d \n",res);  // res = 2
       
       
       for(i=0;i<20;i++){
             printf("%d + %d =",maior,res);
            //Usa os resultados das operações acima ( res = 2 + 1 = 3  )
            res = res + maior;
            //Aqui o resultado passa a ser 3
            maior = res - maior;
            //Aqui nos tiramos do valor maior o valor do resultado então ( maior = 3 - 1 = 2 )
            printf(" %d\n",res);
             }
       system("pause>null");
       }
