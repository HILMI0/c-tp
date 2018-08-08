#include <stdio.h>
#include <stdlib.h>
void minheurs(int* pointheurs, int* pointminutes);

int main()
{
   int heurs = 0 , minutes = 700;
   minheurs(&heurs, &minutes);
   printf("il y'a %d heurs et %d minutes" , heurs, minutes);
    return 0;
}
void minheurs(int* pointheurs, int* pointminutes)
{
    *pointheurs = *pointminutes / 60;
    *pointminutes = *pointminutes % 60;
}
