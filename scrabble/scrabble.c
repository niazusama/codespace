#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{

    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int compute_score(string word)
{
    // Index of the word
    int n = 0;
    int sum = 0;

    // Last entry of a string array
    while (word[n] != '\0')
    {
        if (ispunct(word[n]) == false)
        {
            // Extracting the decimal value (ASCII)
            // Subtracting from 65 as the first charater is A
            // A = 65 hence, following will give the index of array POINT[]
            int i = (int) toupper(word[n]) - 65;
            sum += POINTS[i];
        }
        n++;
    }

    return sum;
}
