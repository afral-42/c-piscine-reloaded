/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounoua <abounoua@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:32:55 by abounoua          #+#    #+#             */
/*   Updated: 2025/11/04 08:47:56 by abounoua         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	dup = ft_strcpy(dup, src);
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*test = "The original string.";
	char	*copy = ft_strdup(test);

	printf("%s\n", copy);
}
*/
