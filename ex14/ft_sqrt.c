/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:47:58 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/03 15:57:20 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	square_root;

	square_root = 0;
	while (square_root * square_root <= nb)
	{
		if (square_root * square_root == nb)
			return (square_root);
		square_root++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(5));
	printf("%d", ft_sqrt(10));
	printf("%d", ft_sqrt(4));
	printf("%d", ft_sqrt(49));
}*/
