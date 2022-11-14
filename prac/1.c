//
// Created by KANAK on 2022/11/04.
//

# include "stdio.h"

int deck();

int main() {
    deck();
    char ex[20];
    puts("Enter girlfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s.\n\n\tYou're history.\n", ex);
}