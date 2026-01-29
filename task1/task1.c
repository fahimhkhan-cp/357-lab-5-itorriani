#include "task1.h"
#include "ctype.h"

void str_lower(char *orig, char *copy)
{
    char *origCurr = orig; // set a curr pointer to the beginning of orig

    char *copyCurr = copy; // set a curr pointer to the beginning of curr

    while (*origCurr != '\0') // loop through orig until you hit the null pointer
    {
        char loweredChar = tolower(*origCurr); // make a variable for the lowercase letter

        *copyCurr = loweredChar; // assign that value to the copy 

        copyCurr++; // increment copyCurr

        origCurr++; // increment origCurr
    }

    *copyCurr = '\0'; //write the null terminator

    return copy; //return the start of the copy 

}

void str_lower_mutate(char *orig)
{
    char *origCurr = orig; //create a pointer to iterate through origin

    while (*origCurr != '\0') // iterate through orig
    {

        char loweredChar = tolower(*origCurr); // create a variable for the lowered char

        *origCurr = loweredChar; // rewrite the origCurr pointer to that value

        origCurr++; // iterate through origCurr;

    }

    return orig;


}   

