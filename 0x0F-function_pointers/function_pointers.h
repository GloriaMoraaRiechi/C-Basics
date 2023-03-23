#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void _putchar(char *c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

<<<<<<< HEAD
#endif /*FUNCTION_POINTERS_H*/
=======
#endif /*FUNCTION_POINTERS_H*/
>>>>>>> 05f7733d4cd45472be7f9f3cf91271d49df0bac6
