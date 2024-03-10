#include <stdio.h>

int main()
{
    FILE *file = fopen("test.csv", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    char line[100];
    int a, b, c, d;

    while (fgets(line, sizeof(line), file) != NULL)
    {
        int read_count = sscanf(line, "%d|%d|%d|%d\n", &a, &b, &c, &d);
        printf("read_count: %d ** ", read_count);
        printf("Values read: %d, %d, %d, %d\n", a, b, c, d);
    }

    fclose(file);
    return 0;
}
