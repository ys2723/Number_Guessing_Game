/* This is a game where the user will be asked to guess a number. 
If the number guessed is lower than the generated number, 
the message "Higher number please" would pop up and 
if the number guessed is higher than the generated number, 
the message "Lower number please" would pop up. 
If the user guesses it right, 
number of attempts would be printed. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int number,guess,nguesses=1;
srand(time(0));
number=rand()%100 + 1;
// printf("The number is %d\n",number);
// The above line would print the computer's guess. thats why commented out.
printf("Guess a number between 1 and 100\n");

do{
    printf("Guess the number:");
    scanf("%d",&guess);

    if(guess>number)
    {printf("Lower number please\n");}

    else if(guess<number)
    {printf("Higher number please\n");}

    else
    {printf("GREAT! You guessed it right in %d attempts.",nguesses);}
    nguesses++;
   } while(guess!=number);
    return 0;
}