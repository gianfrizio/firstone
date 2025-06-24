#include <stdlib.h>
#include <string.h>  
#include "stock_str.h"
#include <iostream> 
#include <unistd.h>

// function to print a character
void ft_putchar(char c) {
    write(1, &c, 1);
}

// function to print a string
void ft_putstr(char *str) {
    while (*str)
        write(1, str++, 1);
    ft_putchar('\n');
}

// Function to print an int
void ft_putnbr(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648\n", 12);
        return;
    }
    if (n < 0) {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

// Function to show the contents of array
void ft_show_tab(t_stock_str *par) {
    int i = 0;
    while (par[i].str != nullptr) {
        ft_putstr(par[i].str);
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        i++;
    }
}

// Main function to demonstrate the functionality
int main() {
    const char *words[] = { "hello", "world", "42", "Roma" };
    int size = sizeof(words) / sizeof(words[0]);
    char **argv = const_cast<char**>(words);

    t_stock_str *array = ft_strs_to_tab(size, argv);

    if (!array) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1;
    }

    ft_show_tab(array); 

    // Free allocated memory
    for (int i = 0; i < size; ++i)
        free(array[i].copy);
    free(array);

    return 0;
}
