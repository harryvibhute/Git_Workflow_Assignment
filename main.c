#include <stdio.h>

int f2();

int main()
{   
   printf("This is master branch");
   f2();
   return 0;
}

int f2()
{
	printf("This is feature2");
	return 0;
}

