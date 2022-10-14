#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
