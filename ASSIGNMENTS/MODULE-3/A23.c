#include<stdio.h>
long int multiplyNumbers(int n);
void main() 
{
    int n;
    printf("\n\t\tEnter a positive integer: ");
    scanf("%d",&n);
    printf("\n\n\t\tFactorial of %d = %ld", n, multiplyNumbers(n));
    
}
long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}