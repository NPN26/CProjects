#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice;
    printf("Welcome to Rock Paper Scissor Game\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissor\n");

    // Generate computer choice
    srand(time(NULL));
    int computerChoice = rand() % 3;

    // Get User choice
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    if (userChoice == computerChoice) {
        printf("Its a Tie\n");
    } else if((userChoice == 1 && computerChoice==1) || (userChoice==2 && computerChoice==2) || (userChoice==3 && computerChoice==0)) {
        printf("Computer Wins\n");
    } else {
        printf("Player Wins\n");
    }
    printf("Computer choose : %d \nPlayer choose : %d" , computerChoice,userChoice);

    return 0;
}
