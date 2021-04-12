# include "main.h"

void hello(int n, char *s, char *fish)
{
    int i, j;
        char *fishes = malloc((strlen(fish) * n + 1) * sizeof(char));

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            strcat(fishes, fish);
        }
        printf("Hello %s %s\n", s, fishes);
        fishes[0] = '\0'; // reset the string
    }
    free(fishes);
}
