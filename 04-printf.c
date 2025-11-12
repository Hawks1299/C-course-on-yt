#include<stdio.h>

void main() {

    // caracteres
    char nome_da_variavel = 'a'; // -127, 127
    unsigned char variavel2; // 0, 255
    printf("Imprimindo a variavel do tipo CHAR: %c\n", nome_da_variavel);
    printf("Imprimindo duas variaves do mesmo tipo %c %c\n", nome_da_variavel, variavel2);

    // numeros inteiros
    short int nome_da_variavel4;
    int nome_da_variavel2;
    long int nome_da_variavel5;
    printf("short int: %i\n", nome_da_variavel4);
    printf("int: %i\n", nome_da_variavel2);
    printf("long ing: %li\n", nome_da_variavel5);

    unsigned short int variavel1;
    unsigned int variavel3;
    unsigned long int variavel4;
    printf("u short int: %u\n", variavel1);
    printf("u int: %u\n", variavel3);
    printf("u long int: %lu\n", variavel4);

    // numeros reais
    float nome_da_variavel3 = 3.9f;
    double nome_da_variavel7 = 3.4;
    long double nome_da_variavel8 = 6.9e-23L;
    printf("float: %f\n", nome_da_variavel3);
    printf("double: %f\n", nome_da_variavel7);
    printf("long double: %e\n", nome_da_variavel8);

    // constante nomeada
    const int MAX = 100; 
    printf("const: %i\n", MAX);

}