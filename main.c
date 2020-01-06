#include <stdio.h> /**biblioteca de escrita e leitura*/
#include <stdlib.h> /**biblioteca auxiliar*/
#define PI 3.1415 /**constante de pré processador*/

int main()
{
    /**
    Constante

    A palavra reservada "const" cria posição de memória
    já a o "define" substitui em tempo de compilação.

    */
    const int nro = 10;
    int soma = nro + 1;
    printf("Constante %d \n", soma);



    system("pause");
    return 0;
}
