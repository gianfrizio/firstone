#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0; 
    if (power == 0)
        return 1; 
    return nb * ft_recursive_power(nb, power - 1); 
}


int main()
{
    std::cout << ft_recursive_power(10, 4) << std::endl;
    std::cout << ft_recursive_power(5, 0) << std::endl;
    std::cout << ft_recursive_power(10, -3) << std::endl;
}
