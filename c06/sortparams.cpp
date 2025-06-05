#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i, j;
    char *temp;

    i = 1;
    while (i < argc - 1)
    {
        j = 1;
        while (j < argc - 1)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
