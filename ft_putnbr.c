/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:59:58 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/10/21 11:00:01 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr(int n)
{
	char	nb;
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = 11;
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
			i++;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			i++;
		}
		nb = n % 10 + 48;
		write(1, &nb, 1);
	}
	return (i);
}
