#include "checkit.h"      
#include "array_list.h"   
#include <stdlib.h>   

void test1(void) { //test length functionality

   array_list *list = array_list_new(2); //create an empty list with capacity of 2 

   size_t result = list->length; //get the current length

   size_t expected = 0; //expected length should be 0

   checkit_int((int)result, (int)expected); //test

   free(list->arr); // valgrind related checks

   free(list); // valgrind related checks
}

void test2(void) { //add a string to an empty list 

   array_list *list = array_list_new(2); //create an empty list with capacity of 2

   char input[] = "hello";  // create the string hello

   char *result; // will point to stored string

   char *expected = "hello"; // expected string contents

   array_list_add_to_end(list, input); //use our functionality to append that string

   result = list->arr[0]; // get that string from the beginning of the list

   checkit_string(result, expected); //test

   free(list->arr); //valgrind

   free(list);      //valgrind
}

void test3(void) {  //test resize capabilities

   array_list *list = array_list_new(1); //empty list 1 capacity

   char input1[] = "first"; //string 'first'

   char input2[] = "second"; //string 'second'

   char *result; //point to stored string

   char *expected = "second"; //expected value at second index

   array_list_add_to_end(list, input1);  // append first element

   array_list_add_to_end(list, input2);  // append second element (resize)

   result = list->arr[1]; // get second element

   checkit_string(result, expected); //check if they are the same


   free(list->arr);  //valgrind

   free(list); //valgrind
}

int main(void) {                         
   test1();                              
   test2();                            
   test3();                             
   return 0;                             
}
