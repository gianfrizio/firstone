#include <iostream>  
#include <cstdlib>   
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring> 
#include <stdbool.h>

// Check if a character is in charset
bool is_separator(char c, char *charset) {
    while (*charset) {
        if (c == *charset)
            return true;
        charset++;
    }
    return false;
}

// Count the number of words (tokens) in str separated by any charset char
int count_words(char *str, char *charset) {
    int count = 0;
    bool in_word = false;

    while (*str) {
        if (is_separator(*str, charset)) {
            if (in_word) {
                in_word = false;
            }
        } else if (!in_word) {
            in_word = true;
            count++;
        }
        str++;
    }
    return count;
}

// Copy substring [start, end) into a new string
char *copy_word(char *start, char *end) {
    int len = end - start;
    char *word = (char *)malloc(len + 1);
    if (!word) return NULL;

    for (int i = 0; i < len; i++)
        word[i] = start[i];
    word[len] = '\0';

    return word;
}

// Main split function
char **ft_split(char *str, char *charset) {
    int words = count_words(str, charset);
    char **result = (char **)malloc(sizeof(char *) * (words + 1));
    if (!result) return NULL;

    int index = 0;
    char *start = NULL;
    bool in_word = false;

    while (*str) {
        if (is_separator(*str, charset)) {
            if (in_word) {
                // End of word, copy it
                result[index++] = copy_word(start, str);
                in_word = false;
            }
        } else if (!in_word) {
            // Start of new word
            start = str;
            in_word = true;
        }
        str++;
    }

    // If string ended while we were in a word, copy last word
    if (in_word) {
        result[index++] = copy_word(start, str);
    }

    // NULL terminate the array
    result[index] = NULL;

    return result;
}
int main() {
    char **result = ft_split((char*)"hello,world;this:is a test", (char*)",;: ");

    if (!result) {
        std::cout << "ft_split returned NULL" << std::endl;
        return 1;
    }

    std::cout << "Splitted strings:" << std::endl;
    for (int i = 0; result[i] != NULL; i++) {
        std::cout << "[" << i << "] = \"" << result[i] << "\"" << std::endl;
        free(result[i]);  // Free each substring
    }
    free(result);  // Free the array itself


    return 0;
}