/*Taken from Essential_C_v1 - 7 january 2017 - phil welsby*/

#include <stdio.h>

void main (void)
{
    int a = 0;

    while (1)
    {
        printf ("a is equal to %d\n", a);
        a++;

        if (a == 5)
        {
            break;
        }
    }
    printf ("a is equal to %d and I've finished\n", a);
}

