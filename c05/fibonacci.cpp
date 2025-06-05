#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1; 
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main()
{
    std::cout << ft_fibonacci(1) << std::endl;
    std::cout << ft_fibonacci(5) << std::endl;
    std::cout << ft_fibonacci(11) << std::endl;
}
