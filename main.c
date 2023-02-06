#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Init variables
    int var1, var2;

    while (1) // Infinite loop
    {
        printf("Enter two integers that are positive and different: ");
        scanf("%d %d", &var1, &var2);

        // Check if the integers are positive and different
        if (var1 <= 0 || var2 <= 0 || var1 == var2)
        {
            printf("One of the integers is not positive or is the same as the other.\n");
            continue; // Go back to the beginning of the loop
        }

        // Get min and max
        int min, max;
        if (var1 < var2)
        {
            min = var1;
            max = var2;
        }
        else
        {
            min = var2;
            max = var1;
        }

        // Get the sum between min and max
        int sum = 0;
        for (int i = min; i < max+1; i++)
        {
            sum += i;
        }

        // Print the result
        printf("The result is: %d\n", sum);
        break; // Exit the loop
    }
}
