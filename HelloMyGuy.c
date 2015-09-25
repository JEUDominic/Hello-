#include<stdio.h>
int main()
{
  char name,string[40];
  // Hurin told me do that, but I still don't know why. 20150912 by JEU
  printf("Hello My Handsome Guy!\n");
  printf("Please tell me your name:");
  scanf("%[^\n]",string);
  scanf("%c",&name);
  printf ("Hi~ My dear %s\n",string);
 
  return 0;
}
