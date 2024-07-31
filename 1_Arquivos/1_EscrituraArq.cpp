/* Exercicio 1: Escritura de arquivo
*  usando a função fprintf
*/
#include<stdio.h>
int main(){
    
    FILE* arquivo = fopen("dados.txt","w");
    int i;
    for(i=1;i<=100;i++){

        fprintf(arquivo,"%d\n",i);

    }
    fclose(arquivo);
    return 0;
}