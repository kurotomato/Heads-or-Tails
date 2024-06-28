#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Roundnum 3

void coinTossing(void);
void display(int, int);

int main(){
    printf("Tossing a coin...\n");

    coinTossing();

    return 0;
}

void coinTossing(){
    int head, tail, randnum;
    head = tail = 0;
    //initialize rand()//
    srand((unsigned int) time(NULL));

    //Start tossing//
    for(int i = 1; i <= Roundnum; i++){
        printf("Round %d: ", i);

        //make randam number//
        randnum = rand();

        if(randnum % 2 == 1){
            printf("Heads\n");
            head += 1;
        }
        else{
            printf("Tails\n");
            tail += 1;
        }
    }
    //End tossing//

    //Review number of head and tail//
    display(head, tail);


    return;
}

void display(int head, int tail){
    printf("Heads: %d, Tails: %d\n", head, tail);

    return;
}
