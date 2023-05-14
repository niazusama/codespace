#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(int argc, string argv[])
{
    printf("%lu\n", strlen(argv[1]));
    argv[1][strlen(argv[1])-1] = '\0';
    printf("%lu\n", strlen(argv[1]));
    printf("%s\n", argv[1]);

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