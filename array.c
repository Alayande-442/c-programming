#include <stdio.h>
#include <stdlib.h>

int main() {
    int luckyNumbers[] = {2,14,13,24,16,28};
    int numbers[5];
    char name[] = "array of character";
    numbers[0] = 1000;
    luckyNumbers[3] = 500;
    printf("%d\n", luckyNumbers[1]);
    printf("%d\n", luckyNumbers[3]);
    printf("%d\n", numbers[0]);
    printf("%s", name);
    return 0;
}