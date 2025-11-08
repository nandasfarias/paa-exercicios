#include <stdio.h>

int main(){
    int n, t, k, d;
    scanf("%d%*c", &n);
    scanf("%d%*c", &t);
    scanf("%d%*c", &k);
    scanf("%d%*c", &d);

    /*Primeiro caso: Consigo assar todos os bolos no tempo com apenas 1 forno*/
    if (k > n) printf("NO\n");

    else{
        int tempoTotal1Forno, tempoTotal2Fornos;

        /*Se o tempo total para construir o segundo forno for maior que para cozinhar, também não será necessário*/
        if (d > t) printf("NO\n");

        /*Calculando o tempo gasto com apenas 1 forno*/
        tempoTotal1Forno =  (n/k)*t;

        /*Calculando o tempo com 2 fornos*/
        int teste;
        if (t > d){
            teste = t-d;
        }
        else{
            teste = d-t;
        }

        tempoTotal2Fornos = tempoTotal1Forno - teste;

        if(tempoTotal1Forno > tempoTotal2Fornos) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}

/* ENTRADA: 
n -> Número de bolos necessários
t -> Tempo necessário para um forno assar k bolos
k -> número de bolos assados ao mesmo tempo
d -> tempo necessário para construir o segundo forno

Exemplo 1:
n -> 8 bolos ncessários
t -> 6 minutos 
k -> 4 bolos assados ao mesmo tempo
d -> 5 minutos para construir o segundo forno

Enquanto o forno antigo está assando os 4 bolos, Arkady está construindo outro forno semelhante.

tempo com apenas 1 forno: 
8 bolos -> 4 bolos (6 min) + 4 bolos (6 min) = 12 minutos

tempo com 2 fornos:
primeiro forno: 4 bolos (6 minutos)
segundo forno: 5 minutos para construir -> 6 minutos para assar (1 min simultâneo com o forno anterior) = 11 minutos

SAÍDA: SIM

EXEMPLO 2:

ENTRADA:
n -> 8 bolos necessários
t -> 6 minutos
k -> 4 bolos assados ao mesmo tempo
d -> 6 minutos para construir o segundo forno

SAÍDA: NÃO (o tempo com apenas 1 forno é igual com dois fornos)

EXEMPLO 3:

ENTRADA:
n -> 10 bolos necessários
t -> 3 minutos
k -> 11 bolos assados ao mesmo tempo
d -> 4 minutos para construir o segundo forno

SAÍDA: NÃO (eu consigo assar todos os bolos com apenas 1 forno)

EXEMPLO 4:

ENTRADA: 
n -> 4 bolos necessários
t -> 2 minutos
k -> 1 bolo assado
d -> 4 minutos para construir o segundo forno

tempo com apenas 1 forno: 8 minutos
tempo com 2 fornos:
4/2 = 2 bolos em um forno (4 minutos)
4 minutos nesse tempo -> constrói um novo forno
restante: 2 bolos para assar
1 bolo no forno 1 e o outro bolo no forno 2 = 2 minutos
total = 4 + 2 = 6 minutos

SAÍDA: SIM

CASO QUE DEU ERRADO: 28 17 16 26
n -> 28 bolos necessários
t -> 17 minutos
k -> 16 bolos assados
d -> 26 minutos para construir o segundo forno

tempo total com apenas 1 forno: 17 + 17 = 
*/