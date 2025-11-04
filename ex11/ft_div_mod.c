/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:22:45 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/03 15:26:17 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(10, 3, &div, &mod);
	printf("div=%d, mod=%d", div, mod);
}
*/
