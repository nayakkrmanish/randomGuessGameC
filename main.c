// RANDOM NUMBER GUESS

// APPROACHES
/* 

    INCLUDE THE STANDARD LIBRARY FOR SRAND FUNCTION
     * 
    SEED THE RANDOM NUMBER FUNCTION WITH TIME
     * 
    GENERATE A RANDOM NUMBER BETWEEN 0-20, STORE IT IN A VARIABLE
     * 
    CREATE A VARIABLE THAT STORES SCANF FUNCTION WHICH IS TO ASK USER INPUT
     * 
    COUNTER VARIABLE SET TO 6
     * 
    VARIABLE INITIATED OUTSIDE FOR STORING USER INPUT
     * 
    WHILE LOOP SET TO THE DIRECT CONDITION TO CHECK THE USER INPUT WITH THE RANDOM INT VAR
     * 
     IF-ELSEIF-ELSE CONDITION INSIDE THE WHILE BODY TO CHECK THE GREATER THAN LESS THAN EQUAL TO WITH USERVAR AND RAND VAR
     * 
     BREAK TO EXIT INSIDE IF.
      
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{   
    int randomNum = rand() % 21;
    
    int counterVar = 5;
    
    int userGuess;
    
    srand(time(NULL));

	printf("This is a guessing game!\nSince I have choosen the number between 0-20 which you must guess.");
    
    while (counterVar > 0) {
        printf("You have %d attemp%s left\nEnter a guess: ",counterVar, counterVar == 1 ? "t" : "ts");
        scanf("%d", &userGuess);
        
        if (randomNum == userGuess) {
            printf("\nCongratulations, you guessed it!\n");
            break;
        } else if (userGuess < 0 || userGuess > 20) {
            printf("\nHey! I said the number is between 0 and 20.\n");
        } else if (userGuess > randomNum) {
            printf("\nSorry, %d is wrong. My number is less than that.\n",userGuess);
        } else if (userGuess < randomNum) {
            printf("\nSorry, %d is wrong. My number is more than that.\n",userGuess);
        } 
        
        // first use the value and then decrement it
        counterVar--;
    } 
    
    if (counterVar == 0) {
        printf("You have run out of attempts. The correct number was %d.\n", randomNum);
    }   
    
	return 0;
}
