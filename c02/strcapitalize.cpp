#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    bool word = 1;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z') || 
            (str[i] >= '0' && str[i] <= '9'))
        {
            if (word && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] -= 32; 
            else if (!word && (str[i] >= 'A' && str[i] <= 'Z'))
                str[i] += 32; 

            word = 0; 
        }
        else
        {
            word = 1; 
        }
        i++;
    }

    return str;
}

int main() 
{
    char j[] = "12. HELLO WORLD, gianfrizio";
    std::cout<< ft_strcapitalize(j) << std::endl;
}
