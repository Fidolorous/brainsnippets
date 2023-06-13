void ft_putchar(char c);
void rush(int x, int y)
{
    int i, j;

    i = 1;
    while (i <= y)
    {
        j = 1;
        while (j <= x)
        {
            if ((j == 1 && i == 1) || (j == x && i == y))
                ft_putchar('A');
            else if ((j == x && i == 1) || (j == 1 && i == y))
                ft_putchar('C');
            else if (i == 1 || i == y || j == 1 || j == x)
                ft_putchar('B');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

