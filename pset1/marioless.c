// Patryk Rogala (Ufokhi)
// CS50x WEEK 1
// MARIO (LESS)
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // Check for valid height from user's input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Mario right-aligned pyramid
    for (int i = 0; i < height; i++)
    {
        // Print "spaces" to get right-aligned pyramid
        for (int k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }
        // Print "block" of mario pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        // New line for the next layer 
        printf("\n");
    }
}
