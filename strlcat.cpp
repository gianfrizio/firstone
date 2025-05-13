#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0' && i < size)
        i++;

    if (i == size)
        return size + strlen(src);

    while (src[j] != '\0' && (i + j + 1) < size)
    {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return i + strlen(src);
}

int main()
{
    char buffer[12] = "ciao ";
    char to_add[] = "mondo";

    unsigned int total = ft_strlcat(buffer, to_add, sizeof(buffer));
    std::cout << "Risultato: " << buffer << std::endl;         
    std::cout << "Lunghezza teorica: " << total << std::endl;  

    return 0;
}

