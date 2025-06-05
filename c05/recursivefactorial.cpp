#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return 0; 
    if (nb == 0 || nb == 1)
        return 1; 
    return nb * ft_recursive_factorial(nb - 1); 
}

int main()
{
    std::cout << ft_recursive_factorial(10) << std::endl;
    std::cout << ft_recursive_factorial(0) << std::endl;
    std::cout << ft_recursive_factorial(-3) << std::endl;
}
