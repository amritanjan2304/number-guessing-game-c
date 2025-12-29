#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int randomNumber, guess, no_of_guesses = 0;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    do{
        printf("Guess the number (1 to 100): ");
        scanf("%d", &guess);

        if(guess > randomNumber){
            printf("Lower number please\n");
        }
        else if(guess < randomNumber){
            printf("Higher number please\n");
        }
        else{
            printf("You guessed it right!\n");
        }

        no_of_guesses++;

    } while(guess != randomNumber);

    printf("You guessed the number in %d attempts\n", no_of_guesses);

    return 0;
}
