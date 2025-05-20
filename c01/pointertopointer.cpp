#include <unistd.h>
#include <iostream>
 
    void ft_ultimate_ft (int **********nbr)
{ 
    **********nbr = 42;
}
int main()
{ 
    int number;
    int *number2 = &number;
    int **number3 = &number2;
    int ***number4 = &number3;
    int ****number5 = &number4;
    int *****number6 = &number5;
    int ******number7 = &number6;
    int *******number8 = &number7;
    int ********number9 = &number8;
    int *********number10 = &number9;
    ft_ultimate_ft(&number10);
    std::cout << number << std::endl;



};




