#include <cs50.h>
#include <stdio.h>

void drawPyramid(int input);

int main(void)
{
    int input;
    do 
    {
        input = get_int("Height:\n");
    } 
    while (input > 8 || input <= 0);
    drawPyramid(input);
}

void drawPyramid(int input)
{
    for (int line = 0; line < input; line++)
    {
        for (int spaces = input - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");
        }
        printf("  ");
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
     