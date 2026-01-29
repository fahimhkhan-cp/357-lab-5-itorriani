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

void array_list_add_to_end(char *newString, array_list *list) // function signature with input for newString to be put at end
{
    size_t currLength = list->length; //get the list's current length

    size_t capacity = list->capacity; // save the list's capacity

    char* endPointer = (list->arr) + (currLength); // start a pointer and increment to the end of the list

    size_t newStringSize = sizeof(newString); // get the size of the newString in bytes

    if ( ((currLength + newStringSize)) > capacity) // check if we were going to extend the capacity
    {
        printf("Capacity Exceeded");
    }

    char* newStringCurr = newString; // start a pointer to newString

    while (*newString != '\0') // iterate until the newString is over
    {
        *endPointer = *newString; // write the newString value to the end of the array

        newString++; // increment the newString

        endPointer++; // increment the endPointer;
    }

    return;
}

#endif
