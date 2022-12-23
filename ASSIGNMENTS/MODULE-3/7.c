   //7. Write a program to convert temperature from degree centigrade to Fahrenheit.//

#include <stdio.h>

void main()
{
    float celsius, fahrenheit;
    printf("\n\t\t\xb2\xb2\xb2\xb2 Celsius To Fahrenheit \xb2\xb2\xb2\xb2\n\n");
    /* Input temperature in celsius */
    printf("\n\t\tEnter temperature in Celsius : ");
    scanf("%f", &celsius);

    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius*9/5)+32;

    printf("\n\n\t\t%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    
}