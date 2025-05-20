#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    if (n == 0)
        return 0;

    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }

    if (i < n)
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);

    return 0;
}
int main()
{
    std::cout << ft_strncmp("ciao", "ciaone", 4) << std::endl;
    std::cout << ft_strncmp("ciao", "ciaone", 5) << std::endl;
    std::cout << ft_strncmp("hello", "hell", 5) << std::endl;
    std::cout << ft_strncmp("test", "test", 10) << std::endl;
    return 0;
}