#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>




unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)

{ 
    unsigned int i = 0;
    
    if (size > 0)
    {
        while (src[i] && i < size - 1)
        {
        dest[i] = src[i];
        i++;
        }
        dest[i] = '\0';
    }
    i = 0;
    while (src[i])
        i++;
    
    return i;
}
int main() 

{
    char src[]= "hello world";
    char dest[30];
    ft_strlcpy (dest, src, sizeof(dest));
    std::cout << dest << std::endl;
}