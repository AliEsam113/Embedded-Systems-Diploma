#include <stdio.h>
#include <string.h>

int main() {
     int i , j, n;
    do
    {
        printf("Enter the number of rows:");
        scanf("%d" , &n );
    }

    while(n < 1 || n > 8);
    for( i = 0; i<n; i++)
    {

        for(j = 0; j<=i; j++)
        {
            printf("#");
        }
        for( j = 0; j<n-1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
