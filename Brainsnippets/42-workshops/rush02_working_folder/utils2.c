/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsinagl <vsinagl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:22:40 by vsinagl           #+#    #+#             */
/*   Updated: 2023/06/24 20:54:32 by vsinagl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_nbr_conversion(int nb, t_dict *dict, int dict_size)
{
	int	order;
	int	division;
	int	i;

	i = 0;
	while (nb != 0 || i == 0)
	{
		order = dict[dict_size - 1 - i].key;
		division = nb / order;
		if (division == 1)
		{
			if (nb >= 100)
				print_in_dict(dict, 1, dict_size);
			print_in_dict(dict, order, dict_size);
			nb = nb % order;
		}
		else if (division > 1)
		{
			ft_nbr_conversion(division, dict, dict_size);
			print_in_dict(dict, order,dict_size);
			nb = nb % order;
		}
		i ++;
	}
}
