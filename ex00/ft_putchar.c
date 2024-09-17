#include <unistd.h>

void ft_putchar(char c)
{
    writer(1, &c, 1);
}
int main(void)
{
    ft_putchar('a');
    return 0;
}