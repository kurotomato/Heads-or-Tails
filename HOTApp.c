#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Roundnum 3

void askName(void);
void coinTossing(void);
void display(int, int);
void checkVictory(int, int);

char username[20];

int main(){
    askName();
    coinTossing();

    return 0;
}

void askName(){
    printf("Who are you?\n");
    printf("> ");

    scanf("%s", username);

    printf("Hello, %s!\n",username);
}

void coinTossing(){
    int head, tail, randnum;
    head = tail = 0;
    //initialize rand()//
    srand((unsigned int) time(NULL));

    //Start tossing//
    printf("Tossing a coin...\n");

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

    //Review won or lost//
    checkVictory(head, tail);

    return;
}

void display(int head, int tail){
    printf("Heads: %d, Tails: %d\n", head, tail);

    return;
}

void checkVictory(int head, int tail){
    if(head > tail){
        printf("%s won!\n", username);
    }
    else{
        printf("%s lost..\n", username);
    }

    return;
}