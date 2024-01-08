/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/mail/root>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:07:57 by root              #+#    #+#             */
/*   Updated: 2023/12/29 10:58:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;

	n = 3;
	if (argc > 1)
		n = ft_str_is_numeric(argv[1]);
	printf("\nDevuelve: %d\n", n);
	if (n == 1)
		printf("La cadena solamente contiene carácteres numéricos");
	else if (n == 0)
		printf("La cadena contiene carácteres numéricos y/u otros");
	else if (n == 3)
		printf("La cadena está vacía");
	return (0);
}
