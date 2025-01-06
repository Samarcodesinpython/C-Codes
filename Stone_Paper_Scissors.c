#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main(){

    srand(time(0));
    int computer = rand() % 3;
    int player;

    printf("Choose 0 for stone \nChoose 1 for paper\nChoose 2 for Scissor \n\nEnter your number : ");
    scanf("%d", &player);

    if(player == 0 && computer == 0){
        printf("Draw\n");
    } 
    else if(player == 0 && computer == 1){
        printf("You lose");-
    }
    else if(player == 0 && computer == 2){
        printf("You Win !!");
    }
    else if(player == 1 && computer == 0){
        printf("Draw\n");
    }
    else if(player == 1 && computer == 1){
        printf("You lose");
    }
    else if(player == 1 && computer == 2){
        printf("You Win !!");
    }
    else if(player == 2 && computer == 0){
        printf("Draw\n");
    }
    else if(player == 2 && computer == 1){
        printf("You lose");
    }
    else if(player == 2 && computer == 2){
        printf("You Win !!");
    }
    else{
        printf("Something Went Wrong !!");
    }
    return 0;
}