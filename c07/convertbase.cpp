#include <iostream>  
#include <cstdlib>   
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring> 
#include <stdbool.h>

// Check if the base is valid:
// - at least 2 chars
// - no duplicates
// - no '+' or '-'
// - no non-printable chars or spaces
bool is_valid_base(char *base) {
    int len = 0;
    while (base[len])
        len++;
    if (len < 2)
        return false;

    for (int i = 0; i < len; i++) {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
            return false;
        for (int j = i + 1; j < len; j++) {
            if (base[i] == base[j])
                return false;
        }
    }
    return true;
}

// Return the index of character c in base, or -1 if not found
int char_to_val(char c, char *base) {
    for (int i = 0; base[i]; i++) {
        if (base[i] == c)
            return i;
    }
    return -1;
}

// Skip whitespaces (space, tab, newline, etc.)
char *skip_whitespace(char *str) {
    while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
        str++;
    return str;
}

// Convert string str from base to int (handles multiple + and - signs)
int ft_atoi_base(char *str, char *base) {
    if (!is_valid_base(base))
        return 0;

    str = skip_whitespace(str);

    int sign = 1;
    while (*str == '+' || *str == '-') {
        if (*str == '-')
            sign = -sign;
        str++;
    }

    int base_len = strlen(base);
    int result = 0;
    int val;

    while ((val = char_to_val(*str, base)) != -1) {
        result = result * base_len + val;
        str++;
    }

    return sign * result;
}

// Calculate the length needed to represent nbr in base base_len (including sign or zero)
int num_len_base(int nbr, int base_len) {
    int len = (nbr <= 0) ? 1 : 0; // 1 for sign or zero
    unsigned int n = (nbr < 0) ? -nbr : nbr;

    while (n > 0) {
        n /= base_len;
        len++;
    }
    return len;
}

// Convert integer nbr to string in given base
char *itoa_base(int nbr, char *base) {
    int base_len = strlen(base);
    int len = num_len_base(nbr, base_len);

    char *res = (char *)malloc(len + 1);
    if (!res)
        return NULL;

    res[len] = '\0';

    unsigned int n = (nbr < 0) ? -nbr : nbr;

    if (nbr == 0)
        res[0] = base[0];

    while (n > 0) {
        res[--len] = base[n % base_len];
        n /= base_len;
    }

    if (nbr < 0)
        res[0] = '-';

    return res;
}

// Convert string nbr from base_from to base_to, returns allocated string or NULL if invalid
char *ft_convert_base(char *nbr, char *base_from, char *base_to) {
    if (!is_valid_base(base_from) || !is_valid_base(base_to))
        return NULL;

    int num = ft_atoi_base(nbr, base_from);

    return itoa_base(num, base_to);
}
int main() {
    char *result;

    // Test 1: Hexadecimal to binary
    result = ft_convert_base((char*)"  ---1A", (char*)"0123456789ABCDEF", (char*)"01");
    if (result) {
        std::cout << "Hex '  ---1A' to binary: " << result << std::endl;
        free(result);
    } else {
        std::cout << "Conversion failed or invalid base." << std::endl;
    }

    // Test 2: Binary to decimal
    result = ft_convert_base((char*)"101", (char*)"01", (char*)"0123456789");
    if (result) {
        std::cout << "Binary '101' to decimal: " << result << std::endl;
        free(result);
    } else {
        std::cout << "Conversion failed or invalid base." << std::endl;
    }

    // Test 3: Invalid base example (should return NULL)
    result = ft_convert_base((char*)"zz", (char*)"0123456789abcdef", (char*)"01");
    if (result) {
        std::cout << "Invalid test result: " << result << std::endl;
        free(result);
    } else {
        std::cout << "Conversion failed or invalid base." << std::endl;
    }

    return 0;
}