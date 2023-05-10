#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

string ciphertext(string word, string key);

int main(int argc, string argv[])
{

    // If no or more than one command line argument is provided
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        exit(1);
    }

    // Size of the key
    int n = strlen(argv[1]);
    /*if (n != 26)
    {
        printf("Entered key must have non-repeating 26 alphabets\n");
        exit(1);
    }*/

    // If only one command line argument is provided

    // Finding if the key is alphabatic? and non-repating
    for (int i = 0; i < n; i++)
    {
        // If the character is alphabetic return false
        if (!isalpha(argv[1][i]))
        {
            printf("Entered key must have non-repeating 26 alphabets\n");
            exit(1);
        }

        for (int j = 0; j < n; j++)
        {
            if (i != j && argv[1][i] == argv[1][j])
            {
            printf("Entered key must have non-repeating 26 alphabets\n");
            exit(1);
            }
        }
    }

    string key = argv[1];

    // As key has 26 entries
    for (int i = 0; i < n; i++)
    {
        key[i] = toupper(key[i]) - 65;
    }

    // Prompting user for messager to cipher
    string messsage = get_string("Plaintext:  ");
    // Deciphering the message
    string cipher = ciphertext(messsage, key);
    printf("ciphertext: %s\n", cipher);
    return 0;

}

string ciphertext(string word, string key)
{
    int index = 0;
    // For Each letter shifting its value
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // If character is a character
        if (!ispunct(word[i]) && !isspace(word[i]) && !isdigit(word[i]))
        {
            // If character is upper
            if (isupper(word[i]))
            {
                // Getting the index of Key array to substitute the decrypted character
                index = word[i] - 65;
                word[i] = key[index] + 65;
            }
            else
            {
                index = word[i] - 97;
                word[i] = key[index] + 97;
            }
        }

    }
    return word;
}