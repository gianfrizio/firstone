#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>




int ft_str_is_numeric (char *str)
{
    int i = 0;
    
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
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
    char j[] = "12332";
    std::cout<< ft_str_is_numeric(j) << std::endl;
    

    

}