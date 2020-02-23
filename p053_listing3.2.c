/*Exemple d'utilisation de variables et de constantes */
#include <stdio.h>

/* Définition d'une constante pour convertir les livres en grammes */
#define GRAMS_PAR_LIVRE 454

/* Définition d'une constante pour le début du prochain siècle */
const int PROCHAIN_SIECLE = 2000;

/* Déclaration des variables requises */
int poids_en_grams, poids_en_livres;
int an_naissance, age_en_2000;
main()
{
        /* Lecture des données de l'utilisateur */

        printf("Entrez votre poids en livres : ");
        scanf("%d", &poids_en_livres);
        printf("Entrez votre annee de naissance : ");
        scanf("%d", &an_naissance);

        /* conversions */

        poids_en_grams = poids_en_livres * GRAMS_PAR_LIVRE;
        age_en_2000 = PROCHAIN_SIECLE - an_naissance;

        /* Affichage des résultats */

        printf("\nVotre poids en grammes = %d", poids_en_grams);
        printf("\nEn 1 ' an 2000 vous aurez %d ans. \n", age_en_2000);

        return 0;
}
