#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(int argc, string argv[])
{
    printf("%lu\n", strlen(argv[1]));
    int a = argv[1][2];
    printf("%i\n", a);

}

void atio(string word)
{

    // Finding the length of string
    int n = strlen(word);

    if (n == 0)
    {
        return;
    }
    else
    {
        atio(word);
    }

    int val = word[n-1];
    word[n-1] = '\0';
}