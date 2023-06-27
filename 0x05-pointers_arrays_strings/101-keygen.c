#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    char pass[100];
    int rondom = 0;
    int sum = 0;
    int super1;
    int super2;
    
    srand(time(NULL));
    while (sum < 2772)
    {
     pass[rondom] = 33 + rand() % 94;
     sum += pass[rondom++];   
    }
    pass[rondom] = '\0';
    if (sum != 2772)
    {
        super1 = (sum - 2772) / 2;
        super2 = (sum - 2772) / 2;
        
        if ((sum -2772) % 2 != 0)
            super1++;
        for (rondom = 0; pass[rondom]; rondom++)
        {
            if (pass[rondom] >= (33 + super1))
            {
                pass[rondom]  -= super1;
                break;
            }
        }
         for (rondom = 0; pass[rondom]; rondom++)
        {
            if (pass[rondom] >= (33 + super2))
            {
                pass[rondom]  -= super2;
                break;
            }
        }
        
    }
    printf("%s", pass);
    return (0);
}
