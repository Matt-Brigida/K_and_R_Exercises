#include <stdio.h>
//#include <string.h>

// we could use strchr() however this is likely cheating--------

char * new_squeeze(char s[], char w[])
{

  int i, j, k, len;
  len = sizeof(w)/sizeof(w[0]);
  
  int match = 0;

  for (i = j = 0; s[i] != '\0'; i++)
    match = 0;
  for (k = 0; k < len; k++)
    {
      if (w[k] == s[i]) match = 1; 
    }
  if (match != 1)
    s[j] == s[i];
  j++;

  return s;
}

int main()
{
  char a[] = "a quick test";
  char b[] = "qcyyyy";

  new_squeeze(&a, &b);

  printf(&a);
  
}
