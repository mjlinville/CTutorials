#include stdio.h

main()
{
  char temp;
  
  scanf("%c",&temp);
  
  switch(temp) 
  {
    case 'h' :
      //print statements don't automatically get a new line so these two print functions will have the same output
      hello();
      altHello();
      break;
    default :
      printf("Invalid Input");
  }

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
