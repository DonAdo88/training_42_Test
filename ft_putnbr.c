#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{   
    int n = nb;

    if (n <= 0)
    {
        ft_putchar('-');
        n *= -1;
    }
 
}

int main(void)
{
    ft_putnbr(-24);
    ft_putchar('\n');
    return 0;
}