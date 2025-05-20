#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{   
    int size = 0;
    
    for (; str[size]; size++)
    {
        
    };
    return size;
}    
int main()
{  
    char c[13] = "hello world!";
    std::cout<< ft_strlen(c) << std::endl;

}
