#include "main.h"
/*
 *main - points the string "_putchar"
 *
 */

int main(void)
{
char c[] = "_putchar";
int i;

for (i = 0; i<9; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
