#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>




int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return 0;
        i++;
    }
    return 1;
}
int main() 
{
    char j[] = "abv212ds";
    char y[] = "asasas";
    std::cout<< ft_str_is_alpha(j) << std::endl;
    std::cout<< ft_str_is_alpha(y) << std::endl;
}