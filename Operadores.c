#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    Operadores artiméticos
    int retorna int ou seja tudo depois da virgula é ignorado
     */

    //Soma
    int soma = 3+3; //Soma valores 3+3 = 6
    //Subtração 
    int sub = 3-3; //Subtrai valores 3- 3 = 0
    //Divisão
    int div = 5/3; //Divide valores 5 / 3 = 1
    //Multiplicação
    int multi = 69*4; //Multiplica valores 64 * 4 = 276
    //Módulo
    int mod = 32%5; //Divide valores e retorna o resto 32 % 5 = 6
    //Incrementação
    int incre = ++soma; //Retorna o incremento de 1 6 + 1 = 7
    //Decrementação
    int decre = --incre; //Retorna o decremento de 1 7 - 1 = 6

    printf("A soma é: %d \n", soma);
    printf("A subração é: %d\n", sub);
    printf("A divisão é: %d\n", div);
    printf("A mukltiplicação é: %d\n", multi);
    printf("O resto da divisão é: %d\n", mod);
    printf("O incremento da soma é: %d\n", incre);
    printf("O decremento do incremento é: %d\n", decre);
    return 0;

    /*
    Operadores de Atribuição
    */

    /*
    Operadores de Atribuição
    Servem para atualizar o valor da variável usando ela mesma
    */

    int x = 10; // Atribuição simples

    // Atribuição com soma
    x += 5; // x = x + 5

    // Atribuição com subtração
    x -= 3; // x = x - 3

    // Atribuição com multiplicação
    x *= 2; // x = x * 2

    // Atribuição com divisão
    x /= 4; // x = x / 4

    // Atribuição com módulo
    x %= 3; // x = x % 3 (resto da divisão)

    // Operadores bit a bit com atribuição
    x &= 2; // AND bit a bit
    x |= 1; // OR bit a bit
    x ^= 3; // XOR bit a bit

    // Deslocamento de bits
    x <<= 1; // Move bits para a esquerda (multiplica por 2)
    x >>= 1; // Move bits para a direita (divide por 2)

    /*
    Operadores de Comparação
    Faz comparações retornado 1 caso verdadeiras e 0 caso falsas
    */

    int igualA = 1 == 1; // retorna 1 pois 1 é igual a 1

    int diferenteDe = 1!= 1; // retorna 0 pois 1 não é diferente de 1

    int maiorQue = 1 > 3; // retorna 0 pois 1  não é maior do que 3 

    int menorQue = 1 < 3; // retorna 1 pois 1 é menor que 3

    int maiorOuIgual = 2 >= 2; // retorna 1 pois 2 é igual ou maior que 2

    int menorOuIgual = 1 <= 2; // Retorna 1 pois 1 é menor que 2


    /*
    Operadores Lógicos
    Auxilia em combinar condições para comparações

    && "And" Retorna 1 se ambas operacṍes são verdadeiras
    || "Or" Retorna 1 caso uma das operações sejam verdadeiras
    ! "Not" Inverte o resultado, se for verdadeiro retorna 0 e caso falso retorna 1
    */



    return 0;

}
