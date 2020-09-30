/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 06:28:50 by jkoskela          #+#    #+#             */
/*   Updated: 2020/06/07 21:21:05 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char c;

	c = 'P';
	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
	else
	{
		ft_putchar(c);
	}
}
