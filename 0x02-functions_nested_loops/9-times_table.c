#include "main.h"
/**
 * times_table - a function to print 9 times table starting with 0
 * Return: times tble
 */
void times_table(void)
{
int timerow, timecol, timedigit;

for (timerow = 0; timerow <= 9; timerow++)
{
for (timecol = 0; timecol <= 9; timecol++)
{
timedigit = (timerow * timecol);
if (timecol == 0)
{
_putchar(timedigit + '0');
}
else if (timedigit <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(timedigit + '0');
}
else if (timedigit >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(timedigit / 10 + '0');
_putchar(timedigit % 10 + '0');
}
}
_putchar('\n');
}
}
