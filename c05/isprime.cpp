#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return 0;

    i = 2;
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }

    return 1;
}



int main()
{
    std::cout << ft_is_prime(1) << std::endl;
    std::cout << ft_is_prime(5) << std::endl;
    std::cout << ft_is_prime(36) << std::endl;
}
