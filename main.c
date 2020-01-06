#include <stdio.h> /**biblioteca de escrita e leitura*/
#include <stdlib.h> /**biblioteca auxiliar*/

int main()
{
    /**
    Comando de atribução

    variável = expressão;
    int x, y, z;
    x = y = z = 10;
    */

    /**
    int x = 5, y;
    y = x;
    y = x + 10;

    printf("x = %d e y = %d\n", x , y);
    */

    int x = 97;
    char ch1, ch2 = 'A';
    ch1 = x;
    printf("ch1 = %c \n", ch1);
    x = ch2;
    printf("x = %d \n", x);

    system("pause");
    return 0;
}
