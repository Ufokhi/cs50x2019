// Patryk Rogala (Ufokhi)
// CS50x Week 1 (2019)
// Hello.c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get string from user input then print "hello," + string
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}
