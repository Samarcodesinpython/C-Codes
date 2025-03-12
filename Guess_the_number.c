#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    // Seed the random number generator with current time
    srand(time(0)); 

    // Generate a random number between 0 and 99
    int randomNumber = rand() % 100
    int n, guessed = 0; // Initialize guessed to 0

    // printf("%d",randomNumber);

    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        guessed++;

        if (n < randomNumber) {
            printf("Enter a HIGHER number\n");
        } else if (n > randomNumber) {
            printf("Enter a LOWER number\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts!\n", guessed);
        }
    } while (n != randomNumber);

    return 0;
}
