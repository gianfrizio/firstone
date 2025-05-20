#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int minus_count = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            minus_count++;
        i++;
    }

    if (minus_count % 2 != 0)
        sign = -1;

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}
int main()
{
    std::cout << ft_atoi("   ---+--+1234ab567") << std::endl; 
    std::cout << ft_atoi("   ++42") << std::endl;            
    std::cout << ft_atoi("   -+-7abc") << std::endl;         
    std::cout << ft_atoi("abc123") << std::endl;              
    return 0;
}
