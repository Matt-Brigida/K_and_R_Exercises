#include <stdio.h>
#include <limits.h>

int main(){

  //limits.h is in /usr/include, and it will give you the macro names.

  printf("Integers--------\n");
  printf("The Maximum Integer is %d.\n", INT_MAX);
  printf("The Miniumum Integer is %d.\n", INT_MIN);
  printf("Shorts--------\n");
  printf("The Maximum Short is %d.\n", SHRT_MAX);
  printf("The Miniumum Short is %d.\n", SHRT_MIN);
  printf("Chars--------\n");
  printf("The Maximum Char is %d.\n", CHAR_MAX);
  printf("The Miniumum Char is %d.\n", CHAR_MIN);
    

  return 0;

}




