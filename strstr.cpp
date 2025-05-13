#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j;

    if (to_find[0] == '\0')
        return str;

    while (str[i] != '\0')
    {
        j = 0;
        
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
            j++;
        
        if (to_find[j] == '\0')
            return &str[i];
        
        i++;
    }

    return NULL;
}


#include <stdio.h>

int main()
{
    char haystack[] = "Questo è un esempio";
    char needle[] = "un";

    char *result = ft_strstr(haystack, needle);

    if (result)
        std::cout << "Trovato: " << result << std::endl; 
    else
        std::cout << "Non trovato" << std::endl;

    return 0;
}

