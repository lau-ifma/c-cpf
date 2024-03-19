
#include <stdio.h>
void main(){
    int cpf[11];
    int d1, d2;
    int soma = 0;
    
    int i;
    for (i = 0; i < 11; i++){
        scanf("%d", &cpf[i]);
    }

    int a = cpf[9];
    int b = cpf[10];
    int s = 2;

    for(i = 8;i >= 0; i--){
        soma += cpf[i] * s;
        s++;
    }
    int resto = soma % 11;
    if(resto < 2){
        d1 = 0;
    }else{
        d1 = 11 - resto;
    }
     
    cpf[9] = d1;
    soma = 0;
    s= 2;
    
    // digito 2
    for(i = 9;i >= 0; i--){
        soma += cpf[i] * s;
        s++;
    }
    resto = soma % 11;
    if(resto < 2){
        d2 = 0;
    }else{
        d2 = 11 - resto;
    }

    if (d1 == a && d2 == b){
        printf("CPF valido");
    }else{
        printf("CPF invalido");
    }

    
}

