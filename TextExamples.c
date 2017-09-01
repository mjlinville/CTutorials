#include stdio.h

int change = 1;

void Hello(void);
void altHello(void);
void convertTemp(int from, int to);
int getParams(void);
float tempChange(int f);

void main(void)
{
  char temp;
  //int x, y;
  
  scanf("%c",&temp);
  
  switch(temp) 
  {
    case 'h' :
      //print statements don't automatically get a new line so these two print functions will have the same output
      hello();
      altHello();
      break;
    case 't' :
      convertTemp(getParams(), getParams());
      break;
    default :
      printf("Invalid Input");
  }

}
void hello(void)
{
  printf("Hello World\n");
}
void altHello(void)
{
  printf("Hello ");
  printf("World");
  printf("\n");
}
void convertTemp(int from, int to)
{
  int i;
  change = 0;
  
  printf("Temperature Conversion\n%10s %10s %10s \n","Fahrenheit","Celsius","Kelvin");
  
  for(i = from; i <= to; i += 5)
  {
    printf("%10d %10.2f %10.2f \n", i, tempChange);
  }
}
float tempChange(int f)
{
  float i = (change)? (f - 32.0) * (5.0 / 9.0) : (f - 32.0) * (5.0 / 9.0) + 273;
  return i;
}
int getParams(void)
{
  int temp;
  
  if(change) printf("From : ");
  else printf("To : ");
  
  change = (change * -1) +1;
  
  return scanf("%d", temp);
}
             
             
             
             
