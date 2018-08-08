#include <stdio.h>
#include <stdlib.h>

int conversion(int dirham)
{
    int franc = 0;
    franc = 100 * dirham;
    return franc;
}
int main()
{
    int dirham_entre = 0;
    printf("Bienvenue dans le conversateur du dirham en franc\n");
    printf("entrez la somme en dirham\n");
    scanf("%d", &dirham_entre);
    printf("\n%d dirham = %d francs",dirham_entre,conversion(dirham_entre));
    return 0;
}
