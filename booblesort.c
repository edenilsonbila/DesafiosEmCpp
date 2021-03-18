#include <stdio.h>
#include <stdlib.h>

int i,a;

// A - Ler vetores, armazenar os valores
void ler_vetor(int vet[],int tam){
     for(i=0;i<tam;i++){
                        printf("\nDigite o valor do elem = ");
                        scanf("%d",&vet[i]);
                        }
     }
     
//B - Exibir o valor dos vetores
void exibir_elementos(int vet[],int tam){
     for(i=0;i<tam;i++){
                        printf("%d",vet[i]);
                        }
     }
     
// C - Somar o valor dos elementos
void somar_elementos(int vet[],int tam){
     int soma = 0;
     for(i=0;i<tam;i++){
                       soma = soma + vet[i];
                      
                        }
                         printf("\n Soma total = %d \n\n",soma);
     }
     
// D - Substituir negativos para 1 e positivos para 0
void alterar_elementos(int vet[],int tam){
     for(i=0;i<tam;i++){
                        if (vet[i] < 0){
                                   vet[i] = 1;
                                   }else{
                                         vet[i] = 0;
                                         }
                                   }
                        }


void bubblesort(int vet[],int tam){
     int i,j,aux;
     for(i=0;i<tam-1;i++){
                          for(j=0;j<tam-(i+1);j++){
                                              if(vet[j] > vet[j+1]){
                                                        aux = vet[j];
                                                        vet[j] = vet[j+1];
                                                        vet[j+1] = aux;
                                                        }
                                              }
                          }
     }
     

//Função principal              
main(){
       int tam = 5;
       int vet[tam];
       ler_vetor(vet,tam);
       bubblesort(vet,tam);
       somar_elementos(vet,tam);
       //alterar_elementos(vet,tam);
       exibir_elementos(vet,tam);
       system("pause>null");
       }

