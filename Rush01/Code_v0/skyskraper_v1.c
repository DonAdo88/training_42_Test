#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
//die zwei Sonderbedingungen 1/4 & 4/1 argumente 
int pos_line_excl(int a, int b, int c, int d, int e, int f)
    {
    while (b < c && c < d && d < e)
        {
        if (a == 4 && f == 1)
            {

            printf("1\n%d %d %d %d %d %d\n", a, b, c, d, e, f);
            return(0);
            }
        }
     
    while (b > c && c > d && d > e)
        {
        if (a == 1 && f == 4)
            {

            printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
            return(0);
            }
        }return(0);
    }
    int pos_line_block2(int a, int b, int c, int d, int e, int f)
        {
        while (a == 1 && f == 3)
            { b = 4;  
            if (c != 3  && e != 4)
                {d = 3;
 
                printf("3\n%d %d %d %d %d %d\n", a, b, c, d, e, f);
                return(0);
                }
            }
        
        while (b > c && c > d && d > e)
            {
            if (a == 1 && f == 4)
                {

                printf("4\n%d %d %d %d %d %d\n", a, b, c, d, e, f);
                return(0);
                }
            }return(1);
       }

int main(void){

    //pos_line_excl(4, 1, 2, 3, 4, 1);
    //pos_line_excl(1, 4, 3, 2, 1, 4);
    pos_line_excl(2, 3, 1, 2, 4, 1);
    pos_line_excl(1, 4, 1, 3, 2, 3);
    pos_line_excl(3, 2, 1, 4, 2, 1);
    pos_line_excl(1, 2, 3, 4, 1, 2);

}
/*
          else if ((a == 2 && f == 1) || (a == 1 && f == 2))
            {
            ft_putchar('2');
            ft_putchar('O');
            ft_putchar('K');
            ft_putchar('\n');
            return 0;*/