#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power)
{
    int result = 1;

    if (power < 0)
        return 0; 

    while (power > 0)
    {
        result *= nb;
        power--;
    }

    return result;
}

int main()
{
    std::cout << ft_iterative_power(10, 4) << std::endl;
    std::cout << ft_iterative_power(5, 0) << std::endl;
    std::cout << ft_iterative_power(10, -3) << std::endl;
}
