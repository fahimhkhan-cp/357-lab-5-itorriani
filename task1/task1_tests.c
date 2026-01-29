#include "checkit.h"
#include "task1.h"

void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test2() {
   char input[] = "HELLO FRIEND";
   char result[15];
   char *expected = "hello friend";

   str_lower(input, result);

   checkit_string(result, expected);
}

int main(void) {
   test1();
   test2();
   return 0;
}
