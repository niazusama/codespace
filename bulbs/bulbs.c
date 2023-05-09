#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int dec_to_binary(int x);

int main(void)
{
    string message = get_string("Message: ");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
    int dec = message[i];
    int val = dec_to_binary(dec);
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

int dec_to_binary(int x)
{
    // Index of binary array
    int n = 0;
    // Binary array of 8 bits
    int arr[8] = {0};

    // Converting the number to bits

    // If the Qoutient is either zero or one
    while (x != 0 && x != 1)
    {
        // For last entry of binary array store the reminder
        arr[7-n] = x % 2;

        // Dividing the decimal number
        x = x / 2;
        n++;
    }

    // Storing the Qoutient in binary array
    arr[7-n] = x;

    while (n != 0)
    {
        printf("%i", arr[n]);
        n--;
    }
    printf("\n");
    return 0;
}