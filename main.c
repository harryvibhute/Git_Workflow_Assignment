#include <stdio.h>
int f1();


int main()
{   
   printf("This is master branch");
   f1();
   return 0;
}


int f1() 
{
	printf("This is feature f1");
	return 0;
}

