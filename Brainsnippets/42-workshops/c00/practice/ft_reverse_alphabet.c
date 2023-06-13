#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_reverse_alphabet(void)
{
	char c;
	c = 122;
	while(c >= 97)
	{	
		ft_putchar(c);
		c--;
	}
}
int	main(void)
{
	ft_reverse_alphabet();
}
