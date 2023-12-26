/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:29:41 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/20 17:53:22 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	b,
	int	c;

	while (n > 0)
	{
		while (b < 9)
		{
			while (c > 9)
			{
				ft_putchar(
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
