#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // If no command line argument is provided
    if (argc == 1)
    {
        printf("Please enter the key!\n");
        return 1;
    }
    // if more than one command line argument is provided
    else if (argc > 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    // If only one command line argument is provided
    else
    {
        // Finding if the key is Numerical
        bool isnumeric = true;
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
            // If the character is alphabetic return false
            if (isalpha(argv[1][i]))
            {
                isnumeric = false;
            }
        }
    }

    if (!isnumeric)
    {
        printf("Usage: ./caesar key");
    }

}
