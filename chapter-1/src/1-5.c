/*
** Modify the conversion temperature to print the table in reverse order, that
** is, from 300 to 0.
*/

#include <stdio.h>

int main(void)
{
    float fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
