#include<stdio.h>

int c;

int
main(){
  while((c = getchar()) != EOF){
    switch(c){
    case '\t':
      putchar('\n');
      break;
    case ' ':
      putchar('\n');
      break;
    case '.':
      putchar('\n');
      break;
    default:
      putchar(c);
      break;
    }
  }
}
