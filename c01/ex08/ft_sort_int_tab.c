/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:51:17 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/21 12:05:33 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
		int	n;
		int	aux;
		
		n = 0;
		aux = 0;
		while (n < size)
		{
			if (tab[n] > tab[n + 1])
			{
				aux = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = aux;
				n = 0;
			}
			else
				n++;
		}
}

int	main(void)
{
	int	numarray[] = {8, 9, 7, 1, 2, 6};
	int	size;
	int	i;

	size = 5;
	ft_sort_int_tab(numarray, size);
	i = 0;
	while (i <= size)
	{
		printf("%i ,", numarray[i]);
		i++;
	}
	return (0);
}
