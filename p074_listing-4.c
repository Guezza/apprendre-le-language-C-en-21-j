/*  Exemple d'utilisation de l'instruction if avec la clause else   */

#include <stdio.h>

int x, y;

main()
{
    /* Lecture des deux valeurs � tester */

    printf("\nEntrez une valeur entiere pour x: ");
    scanf("%d", &x);
    printf("\nEntrez une valeur entiere pour y: ");
    scanf("%d", &y);

    /* Testez des valeurs et affichage des r�sultats */

    if (x == y)
    printf("x est egal a y\n");
    else
    if (x > y)
    printf("x est plus grand que y\n");
    else
    printf("x est plus petit que y\n");

    return 0;
}
