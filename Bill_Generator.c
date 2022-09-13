#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldword, const char *newword)
{
  char *resultstring;
  int i, count = 0;
  int newwordLength = strlen(newword);
  int oldwordLength = strlen(oldword);

  //lets count the number of times old word occurs in the string
  for (i = 0; str[i] != '\0'; i++)
  {
    if (strstr(&str[i], oldword) == &str[i])
    {
      count++;

      //jump our this word
      i = i + oldwordLength - 1;
    }
  }
  // making a new string to fit in the replaced words
  resultstring = (char *)malloc(i + count * (newwordLength - oldwordLength) + 1);

  i = 0;
  while (*str)
  {
    //compare the substring with result
    if (strstr(str, oldword) == str)
    {
      strcpy(&resultstring[i], newword);
      i += newwordLength;
      str += oldwordLength;
    }
    else
    {
      resultstring[i] = *str;
      i += 1;
      str += 1;
    }
  }
  resultstring[i] = '\0';
  return resultstring;
}

int main()
{
  FILE *ptr = NULL;
  FILE *ptr2 = NULL;
  ptr = fopen("bill.txt", "r");
  ptr2 = fopen("genbill.txt", "w");
  char str[200];
  fgets(str, 200, ptr);
  printf("The given bill templete was %s\n", str);

  //call the replaceword function and generate newstr
  char *newstr;
  newstr = replaceWord(str, "{{item}}", "shoes");
  newstr = replaceWord(newstr, "{{outlet}}", "Ram Laxmi fan outlet");
  newstr = replaceWord(newstr, "{{name}}", "shivani");

  printf("The actual bill generated is : %s\n", newstr);
  printf("the generated bill has been written to the file genbill.txt\n");

  fprintf(ptr2, "%s", newstr);
  fclose(ptr);
  fclose(ptr2);

  return 0;
}