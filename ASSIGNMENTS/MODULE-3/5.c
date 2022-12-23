#include <math.h>
int main()
{
  double a,b,c,s,area;

  printf("\n\t\t\xb2\xb2\xb2\xb2 AREA OF TRIANGLE \xb2\xb2\xb2\xb2\n\n");
 printf("\n\t\tENTER A :");
  scanf("%lf",&a);
  printf("\n\n\t\tENTER B :");
   scanf("%lf",&b);
   printf("\n\n\t\tENTER C :");
    scanf("%lf",&c);
  
  s=(a+b+c)/2; // Semiperimeter

  area=sqrt(s*(s-a)*(s-b)*(s-c));

  printf("\n\n\t\tArea of the triangle = %.3lf\n", area);

}