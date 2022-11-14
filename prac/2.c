/*
 * Practice Program
 * This Code is released under the MIT LICENSE
 * Created by CosmicOppai on 2022/11/05.
*/

#include "stdio.h"

int deck() {
    int decks;
    puts("Enter a number of decks");
    scanf("%i", &decks);
    if (decks < 1) {
        puts("That is not valid number of decks");
        return -1;
    }
    printf("There are %i cards\n", (decks * 52));
    return 0;
}