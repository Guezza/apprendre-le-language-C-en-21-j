#include <stdio.h>

/* Initialisation des variables. Notez que c n'est pas inférieur à d, ce qui est une des conditions à tester. L'expression complète doit finalement être fausse. */

int a = 5, b = 6, c = 5, d = 1;
int x;

main()
{
    /* Evaluation de l'expression sans parenthèses */
    x = a < b || a < c && c < d;
    printf("\nSans parentheses l'expression a la valeur %d", x);

    /* Evaluation de l'expression avec parenthèses */

    x = (a < b || a < c) && c < d;
    printf("\nAvec les parentheses l'expression a la valeur %d\n", x);

    return 0;
}
