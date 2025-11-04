/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:15:07 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/03 15:20:40 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 0;
	printf("a=%d; b=%d", a, b);
	ft_swap(&a, &b);
	printf("\na=%d; b=%d", a, b);
}*/
