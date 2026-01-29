#ifndef ARRAY_LIST.H
#define ARRAY_LIST.h
#include <stddef.h>
#include "array_list.h"

array_list array_list_new( size_t capacity) // include arguments for location and capacity 
{
    array_list *newList = malloc(sizeof *newList); // create a structure with updatable memory

    newList -> capacity = capacity; //assign the capacity

    newList -> length = 0; //start off a new list with length 0

    newList -> arr = malloc(capacity * (sizeof( *newList->arr))); // make a newList with updatable size ( for any dataType)

    return newList; //return the completed object
}

#endif
