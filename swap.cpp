
#include <unistd.h>
#include <iostream>

 
    void ft_swap (int *n, int *n1)
    {
    int tmp = *n;
    *n = *n1;
    *n1= tmp;
    }
int main()
{ 
    int a = 42;
    int b = 24;
    std::cout<< a << b <<std::endl;
    ft_swap (&a, &b);
    std::cout<< a << b << std::endl;


    


};
