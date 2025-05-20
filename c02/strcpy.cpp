#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>




char *ft_strcpy (char *dest, char *src)

{ 
    int i = 0;
    
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    
    dest[i] = '\0';
    return dest;

}

int main() 

{
    char str []= "hello world\n";
    char str2 [30];
    ft_strcpy (str2, str);
    std::cout << str2 << std::endl;

    

  };