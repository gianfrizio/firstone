#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    while (*str != 0)
    {
        write (1, str, 1);
        str++;  
    }
    
}    
int main()
{  
    char c[14] = "hello world!\n";
    ft_putstr(c);

    
}
