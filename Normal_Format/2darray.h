#ifndef 2DARRAY_H
# define 2DARRAY_H

# include <stdlib.h>

// Int Array
int	**intarray(int x, int y);//         - Init
void free_intarray(int **a, int x);//   - Free

// Char Array
char **chararray(int x, int y);//       - Init
void free_chararray(char **a, int x);// - Free

#endif