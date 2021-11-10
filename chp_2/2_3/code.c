#include <stdio.h>
#include <stdlib.h>

/* write int htoi(s) s string of hex digits. */

/* using strtol here is jsut to get an answer to see if my method is correct */

int htoi(char s[])
{

  int i, n;

  n=0;
  /* what does converting a letter to int do? We can check first. */
  /* put my implementation here */
  for (i = 0; ; ++i)
  printf("the number is %d\n", (int)s[i]);
  return 1;
  
}

int main(){

  /* const char *my_hex_string = "784abcd1"; */
  int answer = (int)strtol("784abcd1", NULL, 16);
  printf("The answer is %d\n", answer);
  htoi("784abcd1");
  return 0;
  
}
