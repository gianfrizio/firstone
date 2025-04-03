
#include <unistd.h>
#include <iostream>

 
    void ft_div_mod (int a, int b, int *div, int *mod)
    {
        if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
    
    
    }
int main()
{ 
    int n, n1, d, m;
    n = 42;
    n1 = 20;
    ft_div_mod (n, n1, &d, &m);
    std::cout<< n << " " << n1 << " " << d << " " << m << std::endl;    


    


};
