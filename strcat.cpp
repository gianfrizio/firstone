#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    
    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

int main()
{
    char dest[50] = "Ciao, ";
    char src[] = "mondo!";
    
    ft_strcat(dest, src);
    std::cout<< dest << std::endl;
    
    return 0;
}

