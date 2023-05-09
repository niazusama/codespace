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

void dec_2_binary(string word)
{
    // Index for a character
    int n = 0;

    // Converting the charater to decimal
    while (word[n] != '\0')
    {
        int dec = word[n];
        printf("%i\n", dec);
        n++;
    }
}