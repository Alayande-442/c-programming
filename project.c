#include <stdio.h>
#include <stdlib.h>

// int main() {
//     double num1;
//     double num2;
//     char op;

//     printf("Enter a number:");
//     scanf("%lf", &num1);
//     printf("Enter an operator:");
//     scanf(" %c", &op);
//     printf("Enter a second number:");
//     scanf("%lf", &num2);

//     if(op == '+') {
//         printf("%f", num1 + num2);

//     }else if(op == '-') {
//         printf("%f",num1 - num2);
//     }else if(op == '/') {
//         printf("%f", num1 / num2);
//     }else if(op == '*') {
//         printf("%f", num1 * num2);

//     }else {
//         printf("Enter a valid operator");
//     }
//     return 0;
// }


/*********************************************
 * *******************************************
 * BUILDING A GUESSING GAME IN C PROGRAMMING
 * *******************************************
*/

int main() {
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;
    while (guess != secretNumber && outOfGuess == 0) {
        if (guessCount < guessLimit) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;

        }else {
            outOfGuess = 1;

        }
        

    };
    if (outOfGuess == 1) {
        printf("you are out of guess");
    }else {
        printf("you guess right");
    }
    return 0;
}