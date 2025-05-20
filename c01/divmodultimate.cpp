
#include <unistd.h>
#include <iostream>

 
    void ft_ultimate_div_mod (int *a, int *b)
    {
        int tmp;

        if (*b)
    {
        tmp = *a;
        *a = *a / *b;
        *b = tmp % *b;
    }
    
    
    }
int main()
{ 
    int n, n1;
    n = 42;
    n1 = 20;
    ft_ultimate_div_mod (&n, &n1);
    std::cout << n << "," << n1 << std::endl;    


    


};
