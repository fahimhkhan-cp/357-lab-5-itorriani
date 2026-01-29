#include "checkit.h"
#include "array_list.h"

void test1() {
   array_list *list = array_list_new(2);

   size_t result = list->length;
   size_t expected = 0;

   checkit_int((int)result, (int)expected);

   free(list->arr);
   free(list);
}

void test2() {
   array_list *list = array_list_new(2);

   char input[] = "hello";
   char *result;
   char *expected = "hello";

   array_list_add_to_end(list, input);
   result = list->arr[0];

   checkit_string(result, expected);

   free(list->arr);
   free(list);
}

void test3() {
   array_list *list = array_list_new(1);

   char input1[] = "first";
   char input2[] = "second";
   char *result;
   char *expected = "second";

   array_list_add_to_end(list, input1);
   array_list_add_to_end(list, input2);   /* should force resize */
   result = list->arr[1];

   checkit_string(result, expected);

   free(list->arr);
   free(list);
}

int main(void) {
   test1();
   test2();
   test3();
   return 0;
}
