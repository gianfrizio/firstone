#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0' && j < nb)
    {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return dest;
}

int main()
{
    char dest[50] = "Ciao, ";
    char src[] = "mondo!";
    
    ft_strncat(dest, src, 3);
    std::cout<< dest << std::endl;
    
    return 0;
}

