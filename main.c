#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getwinner(int userChoice , int computerChoice);

int main(){

    int userChoice;
    int computerChoice;

    printf("ROCK & PAPER & SCISSORS\n");
    printf("SELECT AN OPTION\n");
    printf("1.ROCK\n");
    printf("2.PAPER\n");
    printf("3.SCISSORS\n");
    printf("Your Choice:");
    scanf("%d",&userChoice);

    srand(time(NULL));
    computerChoice = (rand() % 3) + 1;

    getwinner(userChoice,computerChoice);

    return 0;
}

void getwinner(int userChoice,int computerChoice){
    printf("Computer Chose %d\n",computerChoice);

    if(userChoice == computerChoice){
        printf("No one wins, its a tie!\n");
    }
    else if((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2)){
        printf("You got a win!\n");
    }
    else{
        printf("You lost mate.\n");
    }
}
