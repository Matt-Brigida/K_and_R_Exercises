#include <stdio.h>

void squeeze(char s[], char c)
{
  int i,j;

  for(i=j=0; s[i] != '\0'; i++)
    if(s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

int main()
{
  char a[] = "a quick test";

  squeeze(a, 'q');

  printf(a);

}
