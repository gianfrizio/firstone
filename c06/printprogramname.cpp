#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;
    char *name = argv[0];

    while (argv[0][i])
    {
        if (argv[0][i] == '/')
            name = &argv[0][i + 1];
        i++;
    }

    i = 0;
    while (name[i])
    {
        write(1, &name[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
