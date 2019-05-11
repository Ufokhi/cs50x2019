// Patryk Rogala (Ufokhi)
// CS50x WEEK 1 (2019)
// CASH
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
    int coins = 0;
    
    float dollars;
    
    // Check for valid variable
    do
    {
        dollars = get_float("How much $ you owe?: ");
    }
    while (dollars < 0);
    
    // Convert dollars into cents
    int cents = round(dollars * 100);
    
    // Count the number of coins
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }
    printf("%i\n", coins);
}
