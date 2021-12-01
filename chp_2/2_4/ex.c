#include <stdio.h>
//#include <string.h>

// we could use strchr() however this is likely cheating--------

int member(int c, char w[])
{
  int k, match;
  int len = sizeof(w) / sizeof(w[0]);

  match = 0;
		       
  for (k = 0; k < len; k++)
    {
      if (w[k] == c) {
	match = 1;
	printf("The value of w is %d\n", w[k]);}
    }
}

void new_squeeze(char s[], char w[])
{
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (member(s[i], w) != 1)
    s[j] = s[i];
  j++;
}

int main()
{
  char s[] = "a quick test";
  char w[] = "qcyyyy";

  new_squeeze(s, w);

  printf(s);
  return 0;
  //  printf("working");
}
