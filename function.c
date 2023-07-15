#include <stdio.h>
#include <stdlib.h>

int main() {

    sayHi("olaoluwa");
    sayHi("odel");
    sayHi("kunle");
    return 0;
}

void sayHi(char name[]) {
    printf("hello %s\n", name);
}
