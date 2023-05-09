#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
void dec_2_binary(string word);

int main(void)
{
    string message = get_string("Message: ");
    dec_2_binary(message);
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

int dec_2_binary(string word)
{
    // Length of string
    int n = strlen(word);

    int dec[n];

    // Converting the charater to decimal
    for (int i = 0; i < n; i++)
    {
        dec[i] = word[i];
    }
    
}