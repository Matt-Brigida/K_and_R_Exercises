#include <stdio.h>
//#include <string.h>

// we could use strchr() however this is likely cheating--------

int member(char x[], int c)
{
  int k;
  int len = sizeof(x)/sizeof(x[0]);
  for (k = 0; k < len; k++)
    {
      if (w[k] == s[i]) {
	match = 1;
	printf("The value of w is %d\n", w[k]);}
    }
}

void new_squeeze(char s[], char w[])
{
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (member(w, s[i]) != 1)
    s[j] = s[i];
  j++;
}

int main()
{
  char a[] = "a quick test";
  char b[] = "qcyyyy";

  new_squeeze(a, b);

  printf(a);
  printf("working");
}
