#include "2darray.h"

int	**intarray(int x, int y)
{
	int i;
	int **a;

	i = 0;
	a = (int **)malloc(x * sizeof(int*));
	while (i < x)
		a[i++] = (int *)malloc(y * sizeof(int));
    return (a);
}

void free_intarray(int **a, int x)
{
    int i;
    
    i = 0;
    while (i < x)
        free(a[i++]);
    free(a);
}

char **chararray(int x, int y)
{
    int i;
    char **a;
	
    i = 0;
    a = (char **)malloc(x * sizeof(char*));
    while (i < x)
        a[i++] = (char *)malloc(y * sizeof(char));
    return (a); 
}

void free_chararray(char **a, int x)
{
    int i;
    
    i = 0;
    while (i < x)
        free(a[i++]);
    free(a);
}
