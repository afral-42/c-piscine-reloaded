/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:49:05 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/04 09:08:31 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
void	print_int_tab(int *tab, int size)
{
	int	i;

	if (!tab)
		printf("NULL\n");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
		i == size ? printf("\n") : printf(", ");
	}
}

int	main(void)
{
	print_int_tab(ft_range(0, 10), 10);
	print_int_tab(ft_range(10, 0), 0);
	print_int_tab(ft_range(3, 5), 2);
	print_int_tab(ft_range(-51, 10), 61);
}
*/
