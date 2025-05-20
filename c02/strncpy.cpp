#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>




char *ft_strncpy (char *dest, char *src, unsigned int number)

{ 
    int i = 0;
    
    while (src[i] && number)
    {
        dest[i] = src[i];
        i++;
        number--;
    }

    dest[i] = '\0';
    
    return dest;
    
}
int main() 

{
    char str []= "hello world\n";
    char str2 [30];
    int n = 10;
    ft_strncpy (str2, str, n);
    std::cout << ft_strncpy (str2, str, n) << std::endl;

  };