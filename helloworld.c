#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("Hello World\n");


  int x = 12; // nothing special here

  int* ptr = &x; //& get the memory address of a vairable so now ptr = the address in memory of x

  int  y = 8 + *ptr; // y = 8 + the dereferaced value of ptr, ptr points at x so resolves to y =  8 + 12

  printf("Y equals: %d \n", y );


  return 0;

}
