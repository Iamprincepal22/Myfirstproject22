#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomnumber = (rand() % 100) +1;
    int no_of_guesses = 0;
    int guessed;
    
    // print random number
    // printf("Random Number: %d\n", randomnumber);
    //printf("Guess the number");

    do{
     printf("Guess the number");
     scanf("%d" , &guessed);
     if (guessed>randomnumber){
        printf("lower number please\n");
     }
     else{
        printf("Higher number please\n");
     }
     no_of_guesses++;


    }while(guessed!=randomnumber);

    printf("You guessed the number in %d guesses", no_of_guesses );


    return 0;
}