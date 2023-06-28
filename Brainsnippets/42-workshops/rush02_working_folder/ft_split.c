/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:26:58 by pibouill          #+#    #+#             */
/*   Updated: 2023/06/25 14:42:15 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_charset_check(char str_char, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
// while character array  charset not equal to null, conditional loop statement
	{
		if (charset[i] == str_char)
			return (1);
		i++;
// if charset is equal to str_char, return 1 volume and exist function
// if condition is false, increment integer "i" to move to the next element in the character array
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_charset_check(str[i], charset) == 0
			&& (i == 0 || ft_charset_check(str[i - 1], charset) == 1))
			count += 1;
		i++;
	}
	return (count);
}

int	ft_word_len(char *word, char *charset)
{
	int	i;

	i = 0;
	while (word[i] && ft_charset_check(word[i], charset) == 0)
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**ret;

	ret = (char **)malloc(sizeof(char **) * (ft_count_words(str, charset) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_charset_check(str[i], charset) == 0
			&& (i == 0 || ft_charset_check(str[i - 1], charset)))
		{
			ret[j] = ft_strndup(str + i, ft_word_len(str + i, charset));
			j++;
		}
		i++;
	}
	ret[j] = NULL;
	return (ret);
}
