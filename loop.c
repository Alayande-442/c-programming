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

    // ********* FOR LOOPS *****************
    int luckyNumber[] = {4,8,12,14,5,28};
    for (int i = 0; i < 6; i++)
    {
        // printf("my name is olaoluwa\n");
        printf("%d\n", luckyNumber[i]);
    }
    
    


    return 0;
}