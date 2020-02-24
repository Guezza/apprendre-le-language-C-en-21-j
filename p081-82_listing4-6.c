#include <stdio.h>

/* Initialisation des variables. Notez que c n'est pas inf�rieur � d, ce qui est une des conditions � tester. L'expression compl�te doit finalement �tre fausse. */

int a = 5, b = 6, c = 5, d = 1;
int x;

main()
{
    /* Evaluation de l'expression sans parenth�ses */
    x = a < b || a < c && c < d;
    printf("\nSans parentheses l'expression a la valeur %d", x);

    /* Evaluation de l'expression avec parenth�ses */

    x = (a < b || a < c) && c < d;
    printf("\nAvec les parentheses l'expression a la valeur %d\n", x);

    return 0;
}
