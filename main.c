#include <stdio.h> /**biblioteca de escrita e leitura*/
#include <stdlib.h> /**biblioteca auxiliar*/

int main()
{
    /**
    A função scanf e uma função de leitura de teclado
    scanf("tipos de entrada", variaveis);
    */
    int nro;
    float f;

    /**
    printf("Digite um numero: ");
    scanf("%d", &nro);
    printf("Numero digitado: %d \n", nro);
    */

    printf("Digite um numero: ");
    scanf("%d", &nro);
    printf("Digite outro numero: ");
    scanf("%f", &f);
    printf("Numeros: %d e %f\n", nro, f);

    /**
    char letra;
    int nro;
    float n;
    double d;
    scanf("%c", &letra);
    scanf("%d", &nro);
    scanf("%f", &n);
    */

    system("pause");
    return 0;
}
