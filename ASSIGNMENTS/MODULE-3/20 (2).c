#include <stdio.h>

int main()
{
    int i, j, N;

//    printf("Enter N: ");
//    scanf("%d", &N);

    for(i=1; i<=5; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}