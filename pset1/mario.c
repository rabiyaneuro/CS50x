# include <stdio.h>
# include <cs50.h>

int h;

int main(void)

{
    printf("How high do you want the pyramid?\n");
h = GetInt();

    while (h<0 || h>23) 
    {
        printf("Choose a non negative integar no greater than 23\n");
        h = GetInt();
    }

    for (int j=1; j<=h; j++)
    {
        for (int k=1; k<=h-j;k++)
        {
            printf(" ");
        }
        for (int i=1; i<=j+1; i++)
        {
            printf("#");  
        }
        printf("\n");
    }
}
