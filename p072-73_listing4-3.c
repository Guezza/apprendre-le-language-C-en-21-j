/* Exemple d'utilisation de l'instruction de contr�le if */

#include <stdio.h>

int x, y;

main()
{
/* Lecture des deux valeurs � tester */

    printf("\nEntrez une valeur entiere pour x : ");
    scanf("%d", &x);
    printf("\nEntrez une valeur entiere pour y : ");
    scanf("%d", &y);

/* Test des valeurs et affichage des r�sultats */

    if (x == y)
    printf("x est �gal � y\n");

    if (x > y)
    printf("x est plus grand que y\n");

    if (x < y)
    printf("x est plus petit que y\n");

    return 0;
}
