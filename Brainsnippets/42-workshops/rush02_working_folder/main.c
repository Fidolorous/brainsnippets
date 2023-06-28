/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsinagl <vsinagl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:23:10 by pibouill          #+#    #+#             */
/*   Updated: 2023/06/25 00:11:04 by vsinagl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	nb_is_negative(int nb)
{
	if (nb < 0)
	{
		print_str("Error\n");
		return (1);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	main(int ac, char **av)
{
	int	nb;
	char 	*adress;

	if (ac != 2 && ac != 3)
	{
		print_str("Error \n");
		return (1);
	}
	nb = ft_atoi(av[1]);
	if (nb == 0)
		ft_putchar('0');
	if (nb_is_negative(nb) == 1)
		return (1);
	if (ac == 2)
	{
		adress = "numbers.dict";
		rush(nb, adress);
	}
	if (ac == 3)
	{
		adress = av[2];
		rush(nb, adress);
	}
	return (0);
}


// int	main(int ac, char **av)
// {
// 	int	nb;

// 	nb = 0;
// 	if (ac == 2)
// 	{
// 		nb = ft_atoi(av[1]);
// 		if (nb < 0)
// 		{
// 			write(2, "Error\n", 6);
// 			reburn (1);
// 		}
// 		ft_digits_count(ret);
// 	}
// 	else if (ac == 3)
// 	{
// 		nb = ft_atoi(av[2]);
// 		if (nb < 0)
// 		{
// 			write(2, "Error\n", 6);
// 			reburn (1);
// 		}
// 		ft_digits_count(ret);
// 	}
// 	else
// 		write(2, "Error\n", 6);
// 	return (0);
// }
