#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int dec_to_binary(int x, int bit);

int main(void)
{
    string message = get_string("Message: ");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
    int dec = message[i];
    int val = dec_to_binary(dec, 8);
    }
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

int dec_to_binary(int x, int bit)
{
    while (x != 0 && x != 1)
    {
        int i = x % 2;
        x = x / 2;

        printf("%i remiander\n",i);
    }
    
    return 0;
}