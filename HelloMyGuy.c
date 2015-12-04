#include<stdio.h>
int main()
{
	  char name,string[40];
	  printf("Hello My Handsome Guy!\n");
	  printf("Please tell me your name:");
	  scanf("%[^\n]",string);
	  printf ("Hi~ My dear %s\n",string);
	 
 
  return 0;
}
