/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:50:36 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/20 18:58:59 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 40;
	n2 = 5;
	printf("Valor n1 antes: %d\n", n1);
	printf("Valor n2 antes: %d\n", n2);
	ft_ultimate_div_mod(&n1, &n2);
	printf("Valor de n1 después: %d\n", n1);
	printf("Valor de n2 después %d\n", n2);
}
