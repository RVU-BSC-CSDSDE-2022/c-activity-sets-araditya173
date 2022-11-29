#include <stdio.h>
#include <math.h>


int main()
{
  float x1,x2,y1,y2,formula;
  printf("the value of x1 is: ");
  scanf("%f",&x1);
  printf("the value of x2 is: ");
  scanf("%f",&x2);
  printf("the value of y1 is: ");
  scanf("%f",&y1);
  printf("the value of y2 is: ");
  scanf("%f",&y2);
  formula=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("the distance between two points is %.4f", sqrt(formula));
  printf("\n");
  return 0;
  
}