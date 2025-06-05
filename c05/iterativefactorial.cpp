#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;

    if (nb < 0)
        return 0; 

    while (nb > 0)
    {
        result *= nb;
        nb--;
    }

    return result;
}
int main()
{
    std::cout << ft_iterative_factorial(5) << std::endl;
    std::cout << ft_iterative_factorial(0) << std::endl;
    std::cout << ft_iterative_factorial(-3) << std::endl;
}
