/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:25:45 by pibouill          #+#    #+#             */
/*   Updated: 2023/06/24 20:11:21 by ggyevi-s         ###   ########.fr       */
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
// A while loop that skips any leading whitespace characters in the string str. The characters considered as whitespace are space (' ') and control characters with ASCII values between 9 and 13.
	if (*str == '-')
		sign = -1;
// If the current character pointed by str is a minus sign ('-'), the sign variable is set to -1 to indicate a negative number.	
	if (*str == '-' || *str == '+')
		str++;
// If the current character pointed by str is either a minus sign ('-') or a plus sign ('+'), the str pointer is incremented to skip the sign character.
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
// A while loop that continues as long as the current character pointed by str is a digit (0-9). Inside the loop, each digit character is converted to its corresponding integer value and added to res. The res value is updated by multiplying it by 10 and adding the digit value obtained by subtracting the ASCII value of '0' from the current character.
	return (res * sign);
// The final result, res, is multiplied by the sign value (1 or -1) to account for the positive or negative sign of the number.
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
