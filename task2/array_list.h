#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H
#include <stddef.h>



typedef struct 
{
    char** arr; //make sure that it is an pointer to a pointer, becase we are pointing to an array of strings
    size_t capacity;
    size_t length;

} array_list;

array_list *array_list_new(size_t capacity);

void array_list_add_to_end(array_list *list, char *newString);


#endif
