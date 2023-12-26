/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:30:01 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/20 18:40:26 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 1;
	n2 = 2;
	printf("Valor de n1 antes: %d\n", n1);
	printf("Valor de n2 antes: %d\n", n2);
	ft_swap(&n1, &n2);
	printf("Valor de n1 después: %d\n", n1);
	printf("Valor de n2 después: %d\n", n2);
}
