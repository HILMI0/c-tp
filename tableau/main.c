#include <stdio.h>
#include <stdlib.h>
int sommeTableau(int tableau[], int tailleTableau);
int v;
int main()
{
    int tableau[6];
    sommeTableau(tableau, 6);
    printf("%d", v);
    return 0;
}
int sommeTableau(int tableau[], int tailleTableau)
{

    v = tableau[0] + tableau[1] + tableau[2] + tableau[3] + tableau[4] + tableau[5];
    return v;
}

