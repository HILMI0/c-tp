#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resultat = 0, note_de_nationale = 0, note_de_classe = 0, note_de_regionale = 0;
    printf("note_de_nationale=");
    scanf("%f", &note_de_nationale);
    printf("note_de_regionale=");
    scanf("%f", &note_de_regionale);
    printf("note_de_classe=");
    scanf("%f", &note_de_classe);
    resultat = (note_de_classe+note_de_regionale+(note_de_nationale*2))/4;
    printf("votre note generale est %f \n", resultat);

    if (resultat >= 17)
    {
        printf("vous avez tres bien passe votre baccalaureat");
    }
    else if (resultat >= 15)
    {
        printf("vous avez bien passez votre baccaloreat");
    }
    else if (resultat >= 12)
    {
        printf("vous avez passez votre baccalaureat avec succes");
    }
    return 0;
}
