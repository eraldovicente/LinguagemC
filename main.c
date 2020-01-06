#include <stdio.h> /**biblioteca de escrita e leitura*/
#include <stdlib.h> /**biblioteca auxiliar*/

int main()
{
    char letra = 'a';
    int nro = 10;
    float n = 5.25;
    printf("%c \n", letra);
    printf("%d \n", letra);
    printf("%d \n", nro);
    printf("%f \n", n);
    printf("Meu programa C\n");
    printf("Letra %c, inteiro %d \n", letra, nro);
    printf("Nro: %d; Nro + 1: %d\n", nro, nro+1);

    system("pause");
    return 0;
}
