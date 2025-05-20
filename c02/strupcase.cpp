#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strupcase (char *str)

{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
        i++;
    }
    return str;
}
int main() 
{
    char j[] = "abvds";
    std::cout<< ft_strupcase(j) << std::endl;
}
