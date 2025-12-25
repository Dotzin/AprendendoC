/*
importação da Biblioteca padrão do C
principal método é o printf
*/ 
#include <stdio.h> 


// Função principal, Tudo aqui dentro roda ao rodar o programa
int main(int argc, char const *argv[])
{

    // Tipos de variavel 

    // int = números, sem decimais (2 ou 4 bytes) 
    int numv1 = 3;

    // char = um único caractére de texto (1 Byte) ASPAS SIMPLES!!!1
    char letra = 'N';

    // float = números com decimais até 6-7 digitos decimais (Ocupa 4 bytes)
    float numv2 = 3.141592;

    // double = números com até 15 decimais (Ocupa 8 bytes)
    double numv3 = 3.1415926535949;

    /*Especificadores básicos de Formato (usados pela biblioteca stdio.h)
        Servem como moldes que indicam COMO o printf deve interpretar
        os argumentos passados após a string de formato.

        %d = Int
        %f = Float
        %lf = Double
        %c = Char

    Exemplos de uso:
    */

    // Imprime o número inteiro na variavel numv1
    printf("%d\n", numv1 );

    // Imprime o caractére na variavel letra
    printf("%c\n", letra);    

    // Imprime o número decimal em float na variavel numv2
    printf("%f\n", numv2);    

        // %f funciona para os 2

    // Imprime o número decimal em Double na variavel numv3
    printf("%f\n", numv3);    

    // Precisão decimal
    printf("%.1f\n", numv3); // ]Colocando o .x depois da % indica a quantidade de casas decimais que serão impressas

    // Tamanho em Bytes
    /*
    size_t não é um tipo básico do C, foi adicionado junto com a biblioteca padrão
    */
    printf("%zu\n", sizeof(numv1)); // zu é o especificador feito para imprimir o valor do tipo size_t 

    /*
        Tipos extendidos
        Só tem sentido caso seja necessario controle mais refinado da memória
    */ 
    int intNormal = 1000;                       // int padrão 
    double doubleNormal = 3.14;                 // double padrão

    short int pequeno = -100;                     // int menor vai de -32,768 até 32,767 Especificador: %hd
    unsigned int positivo = 25;                    // Apenas Ints Positivos 0 to 65,535 (2 bytes) até 4,294,967,295 (4 bytes)
    //                                             Especificador: %u
    long int grande = 1234567890;                  // int grande -2,147,483,648 to 2,147,483,647 (4 bytes)
//                                                 -9,223,372,036,854,775,808 
//                                                 até 9,223,372,036,854,775,807 (8 bytes)
//                                                 Especificador: %ld
    long long int grandao = 9223372036854775807; // 0 até 4,294,967,295 (4 bytes)
//                                                  0 até 18,446,744,073,709,551,615 (8 bytes)
    unsigned long long int imenso = 18446744073709551615U; // 0 até 18,446,744,073,709,551,615
    long double preciso = 3.141592653589793238L; // extended precision

    printf("int Normal: %d\n", intNormal);
    printf("Double Normal: %lf\n", doubleNormal);
    printf("Pequeno: %hd\n", pequeno);
    printf("Positivo: %u\n", positivo);
    printf("Grande: %ld\n", grande);
    printf("Grandão: %lld\n", grandao);
    printf("Imenso: %llu\n", imenso);
    printf("Preciso: %Lf\n", preciso);

    // Variaveis constantes não podem ser alteradas

    const VARCONST = 0; // Eternamente será 0
    // Declarar em full capslock é uma boa prática

    return 0;
}
