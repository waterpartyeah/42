/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:25:39 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/21 20:44:33 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

int	main(void)
{
	char	origen[5] = "hola";
	char	destino[5];
	char	*copia;
	int	i;

	copia = ft_strcpy(destino, origen);
	i = 0;
	while (copia[i])
	{
		printf("%c", copia[i]);
		i++;
	}
	return (0);
}
