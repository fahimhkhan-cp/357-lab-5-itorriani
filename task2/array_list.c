#ifndef ARRAY_LIST.H
#define ARRAY_LIST.h
#include <stddef.h>
#include "array_list.h"

array_list *array_list_new( size_t capacity) // include arguments for location and capacity 
{
    array_list *newList = malloc(sizeof *newList); // create a structure with updatable memory

    newList -> capacity = capacity; //assign the capacity

    newList -> length = 0; //start off a new list with length 0

    newList -> arr = malloc(capacity * (sizeof( *newList->arr))); // make a newList with updatable size ( for any dataType)

    return newList; //return the completed object
}

void array_list_add_to_end(array_list *list, char *newString) // function signature with input for newString to be put at end
{
    size_t currLength = list->length; //get the list's current length

    size_t capacity = list->capacity; // save the list's capacity

    size_t newStringSize = sizeof(newString); // get the size of the newString in bytes

    if ( currLength == capacity) // check if the list is at capacity already. 
    {
        size_t newCapacity = list->length + 1; //set a new capacity length
        
        list->arr = realloc(list->arr, newCapacity * sizeof(*list->arr)); // reallocate in bytes

        list->capacity = newCapacity; //update the new capacity
    }

    char** endPointer = (list->arr) + (currLength); // start a pointer and increment to the end of the list

    char* newStringCurr = newString; // start a pointer to newString

    *endPointer = newString; // append the new string to the end of the array

    list->length++; // keep track of the new lenght

    return;
}

#endif
