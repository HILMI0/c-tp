#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice = 0;
    printf("==MENU==\n");
    printf("1-Royale cheese\n");
    printf("2-MC Deluxe\n");
    printf("3-MC Bacon\n");
    printf("4-Big Mac\n");
    printf("what do you chose ?");
    scanf("%d" , &choice );
    switch (choice)
    {
    case 1:
        printf("your choice was : Royal cheese\n");
        break;
    case 2:
        printf("your choice was : MC Deluxe\n");
        break;
    case 3:
        printf("your choice was : MC Bacon\n");
        break;
    case 4:
        printf("your choice was : Big Mac\n");
    default:
        printf("you didn't enter a valid number so you will stay hungry\n");
    }
    return 0;
}
