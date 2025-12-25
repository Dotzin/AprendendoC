#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    Operadores artiméticos
    int retorna int ou seja tudo depois da virgula é ignorado
     */

    //Soma
    int soma = 3+3; //Soma valores
    //Subtração 
    int sub = 3-3; //Subtrai valores
    //Divisão
    int div = 5/3; //Divide valores
    //Multiplicação
    int multi = 69*4; //Multiplica valores
    //Módulo
    int mod = 32%5; //Divide valores e retorna o resto
    //Incrementação
    int incre = ++soma; //Retrona o incremento de 1
    //Decrementação
    int decre = --incre; //Retorna o decremento de 1

    printf("A soma é: %d \n", soma);
    printf("A subração é: %d\n", sub);
    printf("A divisão é: %d\n", div);
    printf("A mukltiplicação é: %d\n", multi);
    printf("O resto da divisão é: %d\n", mod);
    printf("O incremento da soma é: %d\n", incre);
    printf("O decremento do incremento é: %d\n", decre);
    return 0;
}
