#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int num = 5;
    printf("%d\n", num);
    num = 8;
    printf("%d\n", num);

    // constant in c programming

    // const int numb = 10;
    // printf("%d", numb);
    // numb = 20;
    // printf("%d", numb);

    printf("hello world\n");
    printf("%d\n",40);

    // ***** user input in c **** //
    // int age;
    // printf("Enter your age\n");
    // scanf("%d", &age);
    // printf("you are %d years old", age);

    // char name;
    // printf("question 1: what is your name\n");
    // scanf("%s", &name);
    // printf("my name is %s i'm 300 years old");

    // double cgpa;
    // printf("what is your cgpa?\n");
    // scanf("%lf", &cgpa);
    // printf("my cpga is %lf", cgpa);

    // int num1;
    // int num2;
    // printf("Enter your first number\n");
    // scanf("%d", &num1);

    // printf("Enter your second number\n");
    // scanf("%d", &num2);

    // printf("%d", num1 + num2);

    // int multi1;
    // int multi2;

    // printf("Enter your first number\n");
    // scanf("%d", &multi1);

    // printf("Enter your second number\n");
    // scanf("%d", &multi2);

    // printf("%d", multi1 * multi2);

    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    char name[20];

    printf("Enter a color\n");
    scanf("%s",color);
    printf("Enter a plural noun\n");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity\n");
    scanf("%s",celebrityF);
    scanf("%s",celebrityL);
    printf("Enter a name\n");
    scanf("%s", name);

    
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("i love %s %s\n", celebrityF, celebrityL);
    printf("my name is %s\n", name);

    return 0;

}