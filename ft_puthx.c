/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:48:54 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/10/21 11:48:57 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthx(int n, int m)
{
	int	i;
	char	*values;

	if (m)
	{
		values = "0123456789ABCDEF";
	}
	else if (!m)
	{
		values = "0123456789abcdef";
	}
	
	i = 0;

	if (n / 16)
	{
		i+=ft_puthx(n/16,m);
	}
	write (1,&values[n % 16],1);
	i++;
	return (i);
}

/*
int	main(void)
{
	printf("%d",ft_puthx(163,1));
	write(1,"\n",1);
	ft_puthx(163,0);
	return(0);
}
*/