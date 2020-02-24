/* à 16:15 */
/* Démonstration dse modes préfix et postfix */

#include <stdio.h>

int a, b;

main()
{
    /* initialise a et b à la valeur 5 */

    a = b = 5;

    /* on les affiche, en les décrémentant chaque fois */
    /* mode prefix pour b, mode postfix pour a */

    printf("\n%d    %d", a --, --b);
    printf("\n%d    %d", a --, --b);
    printf("\n%d    %d", a --, -- b);
    printf("\n%d    %d", a --, -- b);
    printf("\n%d    %d\n", a --, -- b);

    return 0;
}
