#include "2darray.h"

int	**intarray(int x, int y) {
	int **a;

    if (!(a = (int **)malloc(x * sizeof(int*))))
        return (0);
    for (int i = 0; i < x; i++) {
        a[i] = (int *)malloc(y * sizeof(int));
        if (!a[i])
            return (0);
    }
    return (a);
}

void free_intarray(int **a, int x) { 
    for (int i = 0; i < x; i++)
        free(a[i]);
    free(a);
}

char **chararray(int x, int y) {
    char **a;
	
    if (!(a = (char **)malloc(x * sizeof(char*))))
        return (0);
    for (int i = 0; i < x; i++) {
        a[i] = (char *)malloc(y * sizeof(char));
        if (!a[i])
            return (0);
    }
    return (a); 
}

void free_chararray(char **a, int x) {
    for (int i = 0 ;i < x; i++)
        free(a[i]);
    free(a);
}
