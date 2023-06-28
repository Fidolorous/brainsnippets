/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsinagl <vsinagl@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:25:45 by pibouill          #+#    #+#             */
/*   Updated: 2023/06/24 20:52:24 by vsinagl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

char	*ft_strndup(char *src, int n)
{
	char	*new;
	int		i;

	i = -1;
	new = (char *)malloc(sizeof(char) * (n + 1));
	if (new == NULL)
		return (NULL);
	while (++i < n)
		new[i] = src[i];
	new[i] = '\0';
	return (new);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_in_dict(t_dict *dict, int number, int size)
{
	int		i;
	char	*str;

	i = 0;
	while (i < size)
	{
		if (dict[i].key == number)
		{
			str = ft_strndup(dict[i].value, lenstr(dict[i].value));
			print_str(str);
			free(str);
			write(1, " ", 1);
			return ;
		}
		i++;
	}
	write(1, "Error\n", 22);
}
