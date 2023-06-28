/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggyevi-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:08:16 by ggyevi-s          #+#    #+#             */
/*   Updated: 2023/06/28 20:27:13 by ggyevi-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduce the behavior of the function strcmp (man strcmp).

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while	(*s1 == *s2 && *s1)
		++s1, ++s2;

	return (*s1 - *s2);
}

/*
int main()
{
	char	*s; 
	char	*s1; 

	s = "Hello";
	s1 = "Hello";
	printf("%s\n%s\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));

	s = "hello";
	s1 = "hel";
	printf("%s\n%s\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));

	s = "hel";
	s1 = "hello";
	printf("%s\n%s\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));


	s = "";
	s1 = "";
	printf("\"%s\"\n\"%s\"\nft_strcmp-> %d\nstrcmp->    %d\n\n\n", s, s1, ft_strcmp(s, s1), strcmp(s, s1));
}
*/
