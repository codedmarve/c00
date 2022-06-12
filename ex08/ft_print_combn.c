/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:41:48 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 16:37:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(void)
{
	int	i;
	int	j;

	i = '0';
	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{	
			write(1, &i, 1);
			write(1, &j, 1);
			if (i != '8')
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
