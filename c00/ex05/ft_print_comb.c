/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:38:39 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/20 12:10:54 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 48;
	while (n1 <= 55)
	{
		n2 = n1 + 1;
		while (n2 <= 56)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				ft_putchar(n1, n2, n3);
				if (n1 < 55)
					write(1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
