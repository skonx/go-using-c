# include "main.h"

void hello(char *s, char *fish)
{
    int i, j;
    int N = 10;
    char *fishes = malloc((strlen(fish) * N + 1) * sizeof(char));

    for (i = 0; i < N; i++)
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
