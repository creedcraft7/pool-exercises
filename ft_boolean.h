#ifndef __FT_BOOLEAN_H__
#define __FT_BOOLEAN_H__

#include <unistd.h>

typedef char t_bool;

#define EVEN(nbr) (nbr%2)-1
#define TRUE 1
#define FALSE 0
#define SUCCESS FALSE

char EVEN_MSG[] = "I have an even number of arguments.\n";
char ODD_MSG[] = "I have an odd number of arguments.\n";

#endif