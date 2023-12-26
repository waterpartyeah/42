/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:56:35 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/20 18:00:59 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;

	n = 0;
	printf("El valor de n antes de la llamada a la función es: %d", n);
	ft_ft(&n);
	printf("\n");
	printf("El valor de n después de la función es: %d", n);
	return (0);
}
