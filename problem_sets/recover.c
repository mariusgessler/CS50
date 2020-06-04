#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 512

int main(int argc, char* argv[])
{

    if (argc != 2)
    {
        return 1;
    }

    FILE* input = fopen("card.raw", "r");
    if (input == NULL)
    {
        printf("Cannot open file.\n");
        return 2;
    }

    unsigned char buffer[BUFFER_SIZE];
    int filecount = 0;
    FILE* image = NULL;
    int jpg_found = 0;

    while (fread(buffer, BUFFER_SIZE, 1, input) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0)
        {
            if (jpg_found == 1)
            {
                fclose(image);
            }
            else
            {
                jpg_found = 1;
            }

            char filename[8];
            sprintf(filename, "%03d.jpg", filecount);
            image = fopen(filename, "a");
            filecount++;
        }

        if (jpg_found == 1)
        {
            fwrite(&buffer, BUFFER_SIZE, 1, image);
        }
    }

    fclose(input);
    fclose(image);

    return 0;
}
