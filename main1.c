#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("Welcome to the Quiz!\n");

    printf("\n1. When was C programming invented??\n");
    printf("1) 1982\n2) 1972\n3) 1992\n4) 1962\n");
    scanf("%d", &answer);
    if(answer == 2) score++;

    printf("\n2. Father of C language?\n");
    printf("1) Dennis Ritchie\n2) Bjarne Stroustrup\n3) James Gosling\n4) Charles Babbage\n");
    scanf("%d", &answer);
    if(answer == 1) score++;

    printf("\nYour Score: %d/2\n", score);

    return 0;
}

