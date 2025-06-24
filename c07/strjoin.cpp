#include <iostream>  
#include <cstdlib>   
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring> 

char *ft_strjoin(int size, char **strs, char *sep) {
    if (size == 0) {
        char *empty = (char *)malloc(1);
        if (empty)
            empty[0] = '\0';
        return empty;
    }

    int total_len = 0;
    int sep_len = strlen(sep);

    for (int i = 0; i < size; i++) {
        total_len += strlen(strs[i]);
        if (i < size - 1)
            total_len += sep_len;
    }

    char *result = (char *)malloc(total_len + 1);
    if (!result)
        return NULL;

    result[0] = '\0';

    for (int i = 0; i < size; i++) {
        strcat(result, strs[i]);
        if (i < size - 1)
            strcat(result, sep);
    }

    return result;
}
int main() {
    char *words[] = { (char*)"how", (char*)"are", (char*)"you?" };
    char *sep = (char*)" ";
    char *joined = ft_strjoin(3, words, sep);

    if (joined) {
        std::cout << joined << std::endl;
        free(joined);
    } else {
        std::cout << "Error allocation" << std::endl;
    }

    char *empty = ft_strjoin(0, nullptr, sep);
    if (empty) {
        std::cout << "String empty: '" << empty << "'" << std::endl;
        free(empty);
    } else {
        std::cout << "Error allocation" << std::endl;
    }

    return 0;
}