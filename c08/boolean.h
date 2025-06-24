#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

// Define boolean type and constants
typedef int t_bool;

#define TRUE 1
#define FALSE 0

// Macro to test if a number is even
#define EVEN(nbr) ((nbr) % 2 == 0)

// Message strings
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG  "I have an odd number of arguments.\n"

// Program success code
#define SUCCESS 0

#endif // FT_BOOLEAN_H
