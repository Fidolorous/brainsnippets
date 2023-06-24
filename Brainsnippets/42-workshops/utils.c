/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:25:45 by pibouill          #+#    #+#             */
/*   Updated: 2023/06/24 15:39:32 by pibouill         ###   ########.fr       */
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

int	ft_digits_count(int nb)
{
	int	count;

	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
