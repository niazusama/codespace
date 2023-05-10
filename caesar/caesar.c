#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // If no command line argument is provided
    if (argc == 1)
    {
        printf("Please enter the key!\n");
    }
    else if (argc > 2)
    {
        printf("Usage: %s key\n", argv[0]);
    }

}