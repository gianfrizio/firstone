#include <iostream>  
#include <cstdlib>   
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring> 

int* ft_range(int min, int max) {
    if (min >= max)
        return nullptr;

    int size = max - min;
    int* range = (int*)malloc(size * sizeof(int));
    if (!range)
        return nullptr;

    for (int i = 0; i < size; i++)
        range[i] = min + i;

    return range;
}

int main() {
    int min = 5;
    int max = 10;
    int* arr = ft_range(min, max);

    if (arr != nullptr) {
        for (int i = 0; i < max - min; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        free(arr); 
    } else {
        std::cout << "Array null (min >= max)" << std::endl;
    }

    return 0;
}
