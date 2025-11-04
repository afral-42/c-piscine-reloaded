/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:04:37 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/03 16:27:37 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("Salut", "Salut"));
	printf("%d\n", ft_strcmp("Saluu", "Salut"));
	printf("%d\n", ft_strcmp("Salut\xFF", "Salut9"));
}*/
