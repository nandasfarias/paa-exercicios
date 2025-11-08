#include <stdio.h>

int main(){
    int quant_equipes;

    scanf("%d", &quant_equipes);

    int coresCamisas[quant_equipes][2];

    for (int i = 0; i < quant_equipes; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d%*c", &coresCamisas[i][j]);
        }
    }

    int camisasIguais = 0;
    for (int i = 0; i < quant_equipes; i++){
        int mandanteAtual = coresCamisas[i][0];
        for (int j = 0; j < quant_equipes; j++){
            if (j != i){
                if (coresCamisas[j][1] == mandanteAtual) camisasIguais++;
            }
        }
    }

    printf("%d\n", camisasIguais);

    return 0;
}