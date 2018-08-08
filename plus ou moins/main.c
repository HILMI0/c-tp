#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int nombre_de_partie = 0;

    do {
    printf("                           =====PLUS OU MOINS=====\n");
    printf("Bienvenue dans <PLUS OU MOINS> \n");
    printf("Le meilleure jeu pour faire passer votre temps\n");
    int nombre_mystere;
    const int MAX = 100, MIN =1;
    printf("il faut que j'explique les regles du jeu\nje vais choisir un nombre entre 1 et 100 et vous devez le devinez mais \nje vous aiderez a faire ceci , alors quand vous choisissez un nombre\nje vous disez si le nombre mystere est plus grand ou plus petit que le votre\n\n                            <Allez on commence>\n\n");
    int number_choosen = 0;

    srand(time(NULL));                               //coisir le nombre mystere
    nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("le nombre mystere est maintenant choisi, devinez le!!\n");
    printf("Quel nombre choisissez vous?\n");
    while (number_choosen!=nombre_mystere) {
        scanf("%d" , &number_choosen);
        if (number_choosen > nombre_mystere) {
            printf("moins que cela!\n");
        } else if (number_choosen < nombre_mystere) {
            printf("grand que cela!\n");
        } else {
            printf("\n                      ****<FELICITATIONS>****\nVous avez devinee le nombre mystere");
        }



    }

    printf("\n\nune autre partie?\n\n1:oui\n2:non\n");
    scanf("%d" , &nombre_de_partie);

    }



    while ( nombre_de_partie == 1);
return 0;
}


