#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ciphertext(string word, int key);

int main(int argc, string argv[])
{
    bool isnumeric = true;
    int key = 0;
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
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            // If the character is alphabetic return false
            if (isalpha(argv[1][i]))
            {
                isnumeric = false;
            }
        }
    }

    // If key is numeric convert to str to int
    if (isnumeric)
    {
        key = atoi(argv[1]);
    }
    // Print error and return 1
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string messsage = get_string("Plaintext:  ");
    ciphertext(messsage, key);

}

void ciphertext(string word, int key)
{
    // For Each letter shifting its value
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (ispunct(word[i]) || isspace(word[i]) || isalnum(word[i]))
        {
            printf("Not a characters are: %c\n", word[i]);
        }
        else
        {

            if (isupper(word[i]))
            {
                printf("Upper case characters are: %c\n", word[i]);
            }
            else
            {
                printf("Lower case characters are: %c\n", word[i]);
            }
        }

    }
}