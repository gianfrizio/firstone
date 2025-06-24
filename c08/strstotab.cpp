#include <stdlib.h>
#include <string.h>  
#include "stock_str.h"
#include <iostream> 

char *ft_strdup(char *src) {
    int len = strlen(src);
    char *dup = (char *)malloc(len + 1);
    if (!dup) return NULL;
    for (int i = 0; i < len; i++)
        dup[i] = src[i];
    dup[len] = '\0';
    return dup;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av) {
    t_stock_str *array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if (!array) return NULL;

    for (int i = 0; i < ac; i++) {
        array[i].size = strlen(av[i]);
        array[i].str = av[i];
        array[i].copy = ft_strdup(av[i]);
        if (!array[i].copy) {
            // Handle memory cleanup on failure
            for (int j = 0; j < i; j++)
                free(array[j].copy);
            free(array);
            return NULL;
        }
    }
    // Set last element to indicate end (optional but common)
    array[ac].str = NULL;
    array[ac].copy = NULL;
    array[ac].size = 0;

    return array;
}

t_stock_str *ft_strs_to_tab(int ac, char **av);

int main() {
    const char *words[] = { "hello", "world", "42", "Roma" };
    int size = sizeof(words) / sizeof(words[0]);
    char **argv = const_cast<char**>(words);

    t_stock_str *array = ft_strs_to_tab(size, argv);

    if (!array) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1;
    }

    std::cout << "=== Result ===" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Index " << i << ":" << std::endl;
        std::cout << "  str  = " << array[i].str << std::endl;
        std::cout << "  copy = " << array[i].copy << std::endl;
        std::cout << "  size = " << array[i].size << std::endl;
    }

    // Cleanup
    for (int i = 0; i < size; ++i)
        free(array[i].copy);
    free(array);

    return 0;
}
