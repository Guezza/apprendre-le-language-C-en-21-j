/* � 16:15 */
/* D�monstration dse modes pr�fix et postfix */

#include <stdio.h>

int a, b;

main()
{
    /* initialise a et b � la valeur 5 */

    a = b = 5;

    /* on les affiche, en les d�cr�mentant chaque fois */
    /* mode prefix pour b, mode postfix pour a */

    printf("\n%d    %d", a --, --b);
    printf("\n%d    %d", a --, --b);
    printf("\n%d    %d", a --, -- b);
    printf("\n%d    %d", a --, -- b);
    printf("\n%d    %d\n", a --, -- b);

    return 0;
}
