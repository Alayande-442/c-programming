#include <stdio.h>
#include <stdio.h>

int main() {

    // ****** WHILE LOOP ***********//
    int x = 1; //starter
    while (x <= 5) //condition
    {
        
        printf("%d\n", x); //operation is carried out
        x++; // increment
        
    };


    // ********** DO WHILE LOOP *************
    int y = 5;

    do {
        printf("%d\n", y);
        y++;
    }while (y <= 20); 
    


    return 0;
}