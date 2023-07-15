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
    while (guess != secretNumber) {
        printf("Enter a number: ");
        scanf("%d", &guess);

    };
    printf("you guess right");

    return 0;
}