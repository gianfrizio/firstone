#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
    int i = 1;

    if (nb <= 0)
        return 0;

    while (i <= nb / i)
    {
        if (i * i == nb)
            return i;
        i++;
    }

    return 0;
}


int main()
{
    std::cout << ft_sqrt(1) << std::endl;
    std::cout << ft_sqrt(5) << std::endl;
    std::cout << ft_sqrt(36) << std::endl;
}
