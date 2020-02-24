/* Utilisation de l'opérateur modulo */
/* ce programme converti le nombre de secondes que vous lui */
/* donner en heures, minutes, secondes. */

#include <stdio.h>

/* Définition des constantes */

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

main()
{
    /* Saisie du nombre de secondes */

    printf("Entrez le nombre de secondes (< 65 000): ");
    scanf("%d", &seconds);

    hours = seconds / SECS_PER_HOUR;
    minutes = seconds / SECS_PER_MIN;
    mins_left = minutes % SECS_PER_MIN;
    secs_left = seconds % SECS_PER_MIN;

    printf("%u secondes représentant ", seconds);
    printf("%u h, %u m, et %u s\n", hours, mins_left, secs_left);

    return 0;
}
