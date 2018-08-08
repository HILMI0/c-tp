#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_of_lives = 3;
    int level = 1;
    printf("vous avez %d vies et vous etes au nivau %d \n", number_of_lives, level);
    printf("****BAM****\n");

    number_of_lives = 2;
    level = 2;
    printf("il vous reste %d de vies et vous etes au nivau %d\n\n", number_of_lives, level);
    int age = 0;
    printf("how old are you?");
    scanf("%d", &age);
    printf("ohh,so you'r %d years old!\n", age);
    return 0;
}
 