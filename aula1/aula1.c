#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[50];
    int idade;
    unsigned long cpf;
} pessoa; 


int verificacpf(unsigned long cpf){
    unsigned long aux = cpf;
    unsigned long validador[3];
    validador[0] = aux % 10;
    aux = aux / 10; 
    validador[1] = aux % 10;
    aux = aux / 10;
    validador[2] = 0;
    for(int i = 2; i <= 10 ; i++){
        // printf("%lu mod 10 = %lu * %i  == %i\n",aux, (aux % 10), i ,(aux % 10) * i);
        validador[2] += (aux % 10) * i;
        //printf("validador: %i\n", validador[2]);
        aux = aux / 10; 
    }
    //printf("validador: %i\n", validador[2]);
    if ((((validador[2] *10 ) % 11) % 10 == validador[1])){
       aux = cpf / 10;
       validador[2] = 0;
       for(int i = 2; i <= 11 ; i++){
            //printf("%lu mod 10 = %lu * %i  == %i\n",aux, (aux % 10), i ,(aux % 10) * i);
            validador[2] += (aux % 10) * i;
            aux = aux / 10; 
        }
        if (((validador[2]*10) % 11) % 10 == validador[0]){
            return 0;
        }
    }

    return 1;
}


int main(){
    pessoa pessoas[3];

    for (int i = 0; i < 3 ; i++){
        printf("idade: ", pessoas[i].idade);
        scanf("%i", &pessoas[i].idade);
        printf("nome: ", pessoas[i].nome);
        scanf("%s", pessoas[i].nome);
        printf("cpf: ", pessoas[i].cpf);
        scanf("%lu", &pessoas[i].cpf);
        while(verificacpf(pessoas[i].cpf)){
            printf("cpf invalido \n digite um cpf valido:");
            scanf("%lu", &pessoas[i].cpf);
        }
        printf("\n", pessoas[i].cpf);
    }

    for (int i = 0; i < 3 ; i++){
        printf("pessoa[%i]\n",i);
        printf("idade: %i\n", pessoas[i].idade);
        printf("nome: %s\n", pessoas[i].nome);
        printf("cpf: %011lu\n\n", pessoas[i].cpf);
    } 
}