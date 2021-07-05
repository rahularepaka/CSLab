#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() // Main Function
{

    unsigned long long n; // User variable
    scanf("%llu", &n);    // Insert variable

    unsigned long long fin; // Final Value


    for (unsigned long long i = 1; n > 0; i++) // For Loop for checkign every digit
    {
        unsigned long long k; // Variable
        k = n % 10;           // Remainder in array
        n /= 10;
        
        if (k == 1 | k == 0)
        {
            
            if (n == 0)
            {
                printf("YES");
                break;
            }
        }
        else
        {
            printf("NO");
            break;
        } // inserting value in array
    }

}