#include<stdio.h>
#include<ctype.h>
#define MAX_LENGTH 100

int is_isogram(const char *text)
{
    if(text == NULL || *text == '\0')
    {
        return 0;
    }
    int char_counts[26] = {0};
    for(int i = 0; text[i] != '\n'; ++i)
    {
        char c = tolower(text[i]);
        if(isalpha(c))
        {
            int index = c - 'a';
            if(char_counts[index] > 0)
            {
                return 0;
            }
            char_counts[index]++;
        }
    }
    return 1;
}

int main()
{
    char text[MAX_LENGTH];
    printf("Ingrese una palabra o frase: ");
    fgets(text, MAX_LENGTH, stdin);
    if(is_isogram(text))
    {
        printf("%s es un isograma. \n", text);
    } else {
        printf("%s no es un isograma. \n", text);
    }
    return 0;
}