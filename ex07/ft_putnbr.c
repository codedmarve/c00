/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:45:42 by coder             #+#    #+#             */
/*   Updated: 2022/02/18 21:37:46 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_find(int br)
{
	234
	int	a[10];
	int	i;

	i = 0;
	while (br > 0)
	{
		a[i] = (br % 10); 4 3 2 
		br = br / 10;
		if (br > 0)
		{
			i++;
		}
	}
	while (i > -1)
	{
		a[i] = a[i] + '0';
		write(1, &a[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb > 0)
	{
		ft_find(nb);
	}
	else if ((nb < 0) && (nb > -2147483648))
	{
		nb = -1 * nb;
		write(1, "-", 1);
		ft_find(234);
	}
}
