#include <stdio.h> /**biblioteca de escrita e leitura*/
#include <stdlib.h> /**biblioteca auxiliar*/
#define PI 3.1415 /**constante de pr� processador*/

int main()
{
    /**
    Constante

    A palavra reservada "const" cria posi��o de mem�ria
    j� a o "define" substitui em tempo de compila��o.

    */
    const int nro = 10;
    int soma = nro + 1;
    printf("Constante %d \n", soma);



    system("pause");
    return 0;
}
