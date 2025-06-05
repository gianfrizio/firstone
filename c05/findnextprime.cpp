#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1)
        return 0;

    while (i <= nb / i)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return 2;

    while (!ft_is_prime(nb))
        nb++;

    return nb;
}


int main()
{
    std::cout << ft_find_next_prime(1) << std::endl;
    std::cout << ft_find_next_prime(5) << std::endl;
    std::cout << ft_find_next_prime(36) << std::endl;
}
