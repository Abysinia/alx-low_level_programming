#include "main.h"
/**
 * times_table - a function to print 9 times table starting with 0
 * Return: times tble
 */
void times_table(void)
{
int timerow, timecol, rimtdigit;

for (timerow = 0; timerow <= 9; timerow++)
{
_putchar('0');
_putchar('1');
_putchar(' ');
for (timecol = 1; timecol <= 9; timecol++)
{
timeditit = (timerow * timecol);
if ((timedigit / 10) > 0)
{
_putchar((timedigit / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((timedigit % 10) + '0');

if (timecol < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
