#include <unistd.h>
/**
 * main - write a phrase to the standard error
 *
 * Return: 1 at the end
 *
 */
int main(void)
{

char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, str, 59);
return (1);

}
