// Patryk Rogala (Ufokhi)
// CS50x WEEK 1 (2019)
// MARIO (MORE)
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    // Check if height is validate
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    
    //Mario pyramid
    for (int i = 0; i < height; i++) 
    {
        // Print "spaces" to get right-aligned pyramid
        for (int k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }
        // Print right-aligned side of pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        
        // Space between sides
        printf("  ");
        
        // Left-aligned side of pyramid
        for (int p = 0; p < i + 1; p++)
        {
            printf("#");
        }
        
        // New line for the next layer
        printf("\n");
    }
}
