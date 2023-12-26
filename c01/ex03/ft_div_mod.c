/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:43:23 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/20 18:49:40 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	n1;
	int	n2;
	int	div;
	int	mod;

	n1 = 30;
	n2 = 5;
	div = 0;
	mod = 0;
	printf("Valor n1 antes: %d\n", n1);
	printf("Valor n2 antes: %d\n", n2);
	printf("Valor de div antes: %d\n", div);
	printf("Valor de mod antes: %d\n", mod);
	ft_div_mod(n1, n2, &div, &mod);
	printf("Valor n1 después: %d\n", n1);
	printf("Valor n2 después: %d\n", n2);
	printf("Valor de div después: %d\n", div);
	printf("Valor de mod después: %d\n", mod);
	return (0);
}
