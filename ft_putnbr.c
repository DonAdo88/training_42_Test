#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{   
    nb = (long)nb;
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        nb = nb % 10;
    }
    if (nb < 10)
    {
        ft_putchar(nb + 48);
    }
}

/*int main(void)
{
    ft_putnbr(-24);
    ft_putchar('\n');
    ft_putnbr(24);
    ft_putchar('\n');
    ft_putnbr(-2147483647);
    ft_putchar('\n');
    return 0;
}*/