#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
       char str[30], str2[30];
       int i, tam, y=0;
       
       printf("Digite um texto: ");
       gets(str);
       
       tam = strlen(str);
       
       //Declarar outro contador que seja incrementado somente se for diferente de espaço
       for (i=0;i<tam;i++){
           if (str[i] != ' '){
                         
                      str2[y] = str[i];
                      y++;
                      }
                      
          
           }
        str2[y]='\0';
        puts(str2);
        system("pause>null");
       }
