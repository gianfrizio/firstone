#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strlowcase (char *str)

{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
        i++;
    }
    return str;
}
int main() 
{
    char j[] = "ASDASD";
    std::cout<< ft_strlowcase(j) << std::endl;
}
