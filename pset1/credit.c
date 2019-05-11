// Patryk Rogala (Ufokhi)
// CS50x WEEK 1 (2019)
// Credit
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    bool isCardValidate = false;
    int isSecond = 0;
    
    int suma = 0;
    int cardLength = 2;
    
    // Number of credit card
    long cardNumber;
    
    // Check if cardNumber has not more than 16 digits
    do
    {
        cardNumber = get_long("Enter card number: ");
    }
    while (cardNumber <= 0 || cardNumber > 9999999999999999);
    
    // For another loop
    long cardNumberClone = cardNumber;
    
    // Luhn's Algorithm
    while (cardNumber > 0)
    {
        int num1 = cardNumber % 10;
        if (isSecond == 1)
        {
            if ((num1 * 2) >= 10)
            {
                suma += (num1 * 2) - 9;
                isSecond = 0;
            }
            else
            {
                suma += num1 * 2;
                isSecond = 0;
            }
        }
        else
        {
            suma += num1;
            isSecond = 1;
        }
        cardNumber /= 10;
    }
    
    // Check if card is validate after Luhn Algorithm
    if (suma % 10 == 0)
    {
        isCardValidate = true;
    }
    
    // Check card number length and card's first and second digit
    while (cardNumberClone >= 100)
    {
        cardNumberClone /= 10;
        cardLength++;
    }
    
    // Printf a valid information about card number
    if (isCardValidate == true)
    {
        if (cardLength == 15 && (cardNumberClone == 34 || cardNumberClone == 37))
        {
            printf("AMEX\n");
        }
        else if (cardLength == 16 && (cardNumberClone >= 51 && cardNumberClone <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((cardLength == 13 || cardLength == 16) && (cardNumberClone >= 40 && cardNumberClone <= 49))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
