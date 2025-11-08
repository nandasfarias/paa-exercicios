#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int precos[n];
    int combinacao[m][2];

    for (int i = 0; i < n; i++){
        scanf("%d%*c", &precos[i]);
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < 2; j++){
            int peca1, peca2;
            scanf("%d%*c", &peca1);
            scanf("%d%*c", &peca2);
            combinacao[peca1-1][peca2-1] = 1;
        }
    }

    int totalCombinacoes;
    for (int i = 0; i < n; i++){

    }
    return 0;
}

/*- A loja vende n peças de roupas
- M pares de peças combinam entre si
- Cada peça tem seu preço, representado por um número inteiro de rublos
- Gerald quer comprar 3 peças de roupas que combinam entre si
- Gerald quer gastar o mínimo possível

ENTRADA:
1 - n (número total de peças de roupas) e m (número total de pares de roupa)
2 - os preços de cada peça
*/