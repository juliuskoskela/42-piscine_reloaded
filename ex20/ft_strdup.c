/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 12:46:06 by jkoskela          #+#    #+#             */
/*   Updated: 2020/06/07 15:48:27 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*tmp;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while ((src[size] != '\0'))
		size++;
	tmp = (char *)malloc(sizeof(*tmp) * (size + 1));
	if (!(tmp = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
