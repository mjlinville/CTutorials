#include stdio.h

main()
{
  //print statements don't automatically get a new line so these two print functions will have the same output
  hello()
  altHello()
}
hello()
{
  printf("Hello World\n");
}
altHello()
{
  printf("Hello ");
  printf("World");
  printf("\n");
}
