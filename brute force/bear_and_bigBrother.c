#include <stdio.h>

int main(){
    int limak, bob;

    scanf("%d%*c", &limak);
    scanf("%d%*c", &bob);

    int contador = 0;
    while(limak <= bob){
        limak = limak * 3;
        bob = bob * 2;
        cont++;
    }

    printf("%d\n", contador);
    return 0;
}

/*- Limak quer ser maior que seu irmão Bob
- Limak e Bob pesam a e b. 
- É garantido que o peso de Limak é menor ou igual ao peso de seu irmão.
- Limak come muito e seu peso triplica a cada ano, enquanto o peso de Bob dobra a cada ano
- Depois de quantos anos completos Limak ficará estritamente maior que Bob?

EXEMPLO 1:
Limak: 4
Bob: 7

em 1 ano: Limak pesará 12 e Bob pesará 14
em 2 anos: Limak pesará 36 e Bob pesarpa 28. Limak ficou maior que Bob após dois anos

EXEMPLO 2:
Limak: 4
Bob: 9

em 1 ano: limak->12 / bob->18
em 2 anos: limak->36 / bob->36
em 3 anos: limak->108 / bob->72
Brainstorm do que eu pensei em fazer:
- Fazer um contador, iniciar um while (a < b) e ir multiplicando os valores até Limak ficar maior que Bob, após isso, */