#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>




int ft_str_is_lowercase (char *str)
{
    int i = 0;
    
    
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
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
    char j[] = "azazaza";
    std::cout<< ft_str_is_lowercase(j) << std::endl;
    

    

}