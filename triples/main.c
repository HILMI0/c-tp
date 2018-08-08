#include <stdio.h>
#include <stdlib.h>

int triple(int nombre)
{
    return 3 * nombre;
}
int main()
{
    int nombre_entree , nombre_triple;
    printf("Entrez un nombre\n");
    scanf("%d" , &nombre_entree);
    nombre_triple = triple(nombre_entree);
    printf("Le triple de votre nombre est %d", nombre_triple);

    return 0;
}

