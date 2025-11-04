/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:28:57 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/04 14:36:25 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab)
	{
		if ((*f)(*tab))
			count++;
		tab++;
	}
	return (count);
}
/*
#include <string.h>
#include <stdio.h>

int	check(char *src)
{
	if (strcmp(src, "Anselme"))
		return 0;
	else
		return 1;
}

int	main(void)
{
	printf("%d", ft_count_if(tab, &check));
}
*/
