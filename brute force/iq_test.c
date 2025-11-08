#include <stdio.h>

int main(){
    int quant;

    scanf("%d", &quant);

    int numeros[quant];

    int num, numPar = 0, numImpar = 0;
    for(int i = 0; i < quant; i++){
        scanf("%d%*c", &num);
        if (num % 2 == 0){
            numeros[i] = num;
            numPar++;
        }
        else{
            numeros[i] = num;
            numImpar++;
        }
    }

    if (numPar == 1 && numImpar > 1){
        for (int i = 0; i < quant; i++){
            if (numeros[i]%2 == 0){
                printf("%d\n", i+1);
                break;
            }
        }
    }
    else if (numImpar == 1 && numPar > 1){
        for(int i = 0; i < quant; i++){
            if(numeros[i] % 2 != 0){
                printf("%d\n", i+1);
                break;
            }
        }
    }

    return 0;
}