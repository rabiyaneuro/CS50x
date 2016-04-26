#include <stdio.h>
#include <cs50.h>
#include <string.h>

void MakeCapital(char letter);

int main(void)

{

string s = GetString();

MakeCapital(s[0]);


    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ((s[i]) == ' ')
        {
            MakeCapital(s[(i+1)]);
        }
        
        else 
        {
            continue;
        }
    }

printf("\n");        
}

void MakeCapital(char letter)

{
    if (letter >= 'a' && letter <= 'z')
    {
        printf("%c", letter - ('a' - 'A') );
    }
    else
    {
        printf("%c",letter);
    }
}
