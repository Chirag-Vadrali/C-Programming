#include <stdio.h>
#include <stdlib.h>

int main()
{
    // realloc = Reallocation.Resize previouslyallocated memory, reallocator(ptr,bytes)

    int number = 0;
    printf("Enter the numbers of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(prices));

    if (prices == NULL)
    {
        printf("ERORR has occured!");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter price %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newnum = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newnum);

    float *temp = realloc(prices, newnum * sizeof(float));

    if (temp == NULL)
    {
        printf("Erorr!");
        return 1;
    }
    else
    {
        prices = temp;
        for (int i = number; i < newnum; i++)
        {
            printf("Enter price %d: ", i + 1);
            scanf("%f", &prices[i]);
        }
        for (int i = 0; i < newnum; i++)
        {
            printf("$%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;
}