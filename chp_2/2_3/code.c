#include <stdio.h>
#include <stdlib.h>

/* write int htoi(s) s string of hex digits. */

/* using strtol here is jsut to get an answer to see if my method is correct */

int htoi(char s[])
{

  /* put my implementation here */
  
}

int main(){

  /* const char *my_hex_string = "784abcd1"; */
  int answer = (int)strtol("784abcd1", NULL, 16);
  printf("The answer is %d\n", answer);
  return 0;
  
}
