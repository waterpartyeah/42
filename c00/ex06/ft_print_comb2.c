/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:17:01 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/20 17:00:14 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			if (n1 != n2)
			{
				ft_putchar((n1 / 10) + '0');
				ft_putchar((n1 % 10) + '0');
				write(1, " ", 1);
				ft_putchar((n2 / 10) + '0');
				ft_putchar((n2 % 10) + '0');
				if (n1 < 98)
					write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
