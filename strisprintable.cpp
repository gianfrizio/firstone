#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>




int ft_str_is_printable (char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 32 && str[i] != 127)
        i++;
        else 
        {
        return 0;
        }
        
    }
        
    str[i] = '\0';
    return 1;
        
        
    
    
}

int main() 

{
    char j[] = "";
    std::cout<< ft_str_is_printable(j) << std::endl;
    

    

}