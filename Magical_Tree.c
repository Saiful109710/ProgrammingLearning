#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int finalStars = 10 + N;
    int rows = (finalStars + 1) / 2;

    for (int i = 0; i < rows; ++i) {
        int stars = 1 + 2 * i;
        int spaces = (finalStars - stars) / 2;
        for (int s = 0; s < spaces; ++s) putchar(' ');
        for (int s = 0; s < stars; ++s) putchar('*');
        putchar('\n');
    }

    int trunkWidth = N;
    int trunkLines = 5;
    int trunkSpaces = (finalStars - trunkWidth) / 2;

    for (int i = 0; i < trunkLines; ++i) {
        for (int s = 0; s < trunkSpaces; ++s) putchar(' ');
        for (int s = 0; s < trunkWidth; ++s) putchar('*');
        putchar('\n');
    }

    return 0;
}