#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int get_letters(string text);
int get_words(string text);
int get_sentences(string text);

int main(void)
{
    // Prompt a user to enter the paragraph
    string text = get_string("Text: ");

    // Printing the number of letters
    int letters = get_letters(text);

    // Printing the number of Words
    int words = get_words(text);

    // Printing the number of sentences
    int sentences = get_sentences(text);

    // Calculating Coleman-Liau index
    float l = (letters * 100.0 / words);
    float s = (sentences * 100.0 / words);

    int index = round(0.0588 * l - 0.296 * s - 15.8);

    // Check the grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int get_letters(string text)
{
    int n = 0;
    int letters = 0;

    // Calculating the number of letters
    while (text[n] != '\0')
    {
        if (!isspace(text[n]) && !ispunct(text[n]))
        {
            letters++;
        }
        n++;
    }
    return letters;
}

int get_words(string text)
{
    int n = 0;
    int spaces = 0;

    // Calculating the number of letters
    while (text[n] != '\0')
    {
        if (isspace(text[n]))
        {
            spaces++;
        }
        n++;
    }
    // There will always be spaces + 1 words
    return spaces + 1;
}

int get_sentences(string text)
{
    int n = 0;
    int periods = 0;

    // Calculating the number of letters
    while (text[n] != '\0')
    {
        if (text[n] == '.' || text[n] == '!' || text[n] == '?')
        {
            periods++;
        }
        n++;
    }
    return periods;
}