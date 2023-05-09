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
    int n = 0;
    int arr[8];
    while (x != 0 && x != 1)
    {
        arr[7-n] = x % 2;
        x = x / 2;
        n++;
    }

    do
    {
        arr[n] = 0;
        n++;
    }
    while(n != bit-1);

    while (n != 0)
    {
        printf("%i", arr[n]);
        n--;
    }
    printf("\n");
    return 0;
}