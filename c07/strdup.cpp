#include <iostream>  
#include <cstdlib>   
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring> 


char *ft_strdup(char *src) {
    int len = 0;
    while (src[len] != '\0')
        len++;

    char *dup = (char*)malloc(len + 1); 
    if (!dup)
        return nullptr;

    for (int i = 0; i <= len; i++) 
        dup[i] = src[i];

    return dup;
}

int main() {
    char *original = (char*)"Hello World!";
    char *copy = ft_strdup(original);

    if (copy != nullptr) {
        std::cout << "original: " << original << std::endl;
        std::cout << "dup: " << copy << std::endl;
        free(copy); 
    } else {
        std::cout << "Error: malloc failed.\n";
    }

    return 0;
}
