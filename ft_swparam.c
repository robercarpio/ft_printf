/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swparam.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:40:37 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/10/21 14:40:39 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_swparam(char const format, va_list args)
{
	
	if (format == 'c')
	{
		char	c;
		c = va_arg(args, int);
		return (ft_putchr(c));
	}
	else if(format == 's')
	{
		char	*c;
		c = va_arg(args, char *);
		return(ft_putstr(c));
	}
	else if(format == 'd')
	{

	}
	return (0);
}