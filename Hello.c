//program to display hello using recursion,iteration and printf

#include<stdio.h>

void Display()
{
  printf("Hello \n");
  printf("Hello \n");
  printf("Hello \n");
  printf("Hello \n");
}

void DisplayI()
{
  int i = 1;
  
  while( i <= 4)
  {
     printf("Hello \n");
	 i++;
  }
}

void DisplayR()
{
  static int i = 1;
  
  if( i <= 4)
  {
     printf("Hello \n");
	 
	 i++;
	 
	 DisplayR();
  }
}

int main()
{
  printf("Display Hello using printf\n");
  Display();
  
  printf("Display Hello using iteration\n");
  DisplayI();
  
  printf("Display Hello using recursion\n");
  DisplayR();
  
return 0;
}

/*

output

Display Hello using printf
Hello
Hello
Hello
Hello
Display Hello using iteration
Hello
Hello
Hello
Hello
Display Hello using recursion
Hello
Hello
Hello
Hello

*/