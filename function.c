#include <stdio.h>
#include <stdlib.h>

int powerOfNumber(int num) {
    int result = num * num * num;
    return result;

}

double bodmas(double number, double num2, double num3) {
    double cal = number * number / num2 + num3;
    return cal;
}
int main() {

    sayHi("olaoluwa", 40, "yabatech");
    sayHi("odel", 30, "babcock");
    sayHi("kunle", 60, "unilag");

    // *********** RETURN STATEMENT IN C************
    printf("answer:%d", powerOfNumber(3));
    printf ("answer:%f", bodmas(5,2,2));

    return 0;
}

void sayHi(char name[], int age, char school[]) {
    printf("hello %s you are %d years old and you are student of %s\n", name, age, school);
}
