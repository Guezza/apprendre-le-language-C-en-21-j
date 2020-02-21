#include <stdio.h>

int rayon, aire;

int main()
{
    printf("Entrez le rayon (ex 10) : ");
    scanf("%d", &rayon);
    aire = (int) (3.14159 * rayon * rayon);

    printf("\n\naire = %d\n", aire);
    return 0;
}
