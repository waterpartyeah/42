/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:54:05 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/21 11:47:25 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabnum[size];
	int	i;
	int	copysize;

	i = 0;
	copysize = size;
	while (size >= 0)
	{
		tabnum[i] = tab[size];
		i++;
		size--;
	}
	size = 0;
	while (size <= copysize)
	{
		tab[size] = tabnum[size];
		size++;
	}
}

int	main(void)
{
	int	numarray[] = {1, 9, 7, 4, 5, 6};
	int	size;
	int	i;

	size = 5;
	ft_rev_int_tab(numarray, size);
	i = 0;
	while (i <= size)
	{
		printf("%i ,", numarray[i]);
		i++;
	}
	return (0);
}
