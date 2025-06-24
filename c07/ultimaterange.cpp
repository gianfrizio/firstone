#include <iostream>  
#include <cstdlib>   
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring> 

int ft_ultimate_range(int** range, int min, int max) {
    if (min >= max) {
        *range = nullptr;
        return 0;
    }

    int size = max - min;
    *range = (int*)malloc(size * sizeof(int));
    if (!*range)
        return -1;

    for (int i = 0; i < size; ++i)
        (*range)[i] = min + i;

    return size;
}

int main() {
    int* array = nullptr;
    int min = 5;
    int max = 10;

    int size = ft_ultimate_range(&array, min, max);

    if (size == -1) {
        std::cout << "Error allocation.\n";
    } else if (size == 0) {
        std::cout << "Empty range (min >= max).\n";
    } else {
        std::cout << "Array created (" << size << " elements): ";
        for (int i = 0; i < size; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
        free(array); 
    }

    return 0;
}
