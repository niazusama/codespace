#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

string ciphertext(string word, int key);

int main(int argc, string argv[])
{

    string key;
    // If no or more than one command line argument is provided
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        exit(1);
    }

    // Size of the key
    int n = strlen(argv[1]);
    if (n != 26)
    {
        printf("Entered key must have non-repeating 26 alphabets\n");
        exit(1);
    }

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

        for (int j = 0; j < i; j++)
        {
            if (i != j && argv[1][i] == argv[1][j])
            {
            printf("Entered key must have non-repeating 26 alphabets\n");
            exit(1);
            }
        }
    }

    // Prompting user for messager to cipher
    //string messsage = get_string("Plaintext:  ");
    // Deciphering the message
    //string cipher = ciphertext(messsage, key);
    //printf("ciphertext: %s\n", cipher);
    return 0;

}

string ciphertext(string word, int key)
{
    // For Each letter shifting its value
    int shift = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // If character is a character
        if (!ispunct(word[i]) && !isspace(word[i]) && !isdigit(word[i]))
        {
            // If character is upper
            if (isupper(word[i]))
            {
                // This shif has range of 0-25
                // This is because if the key is greater than 26
                // We have to restart from begining
                // So subtracting 65 (A in ASCII) gives us index in range of 0 - 25
                shift = (word[i] - 65 + key) % 26;
                word[i] = shift + 65;
            }
            else
            {
                // For lower case characters, a = 97
                shift = (word[i] - 97 + key) % 26;
                word[i] = shift + 97;
            }
        }

    }
    return word;
}