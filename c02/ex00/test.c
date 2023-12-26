/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:25:39 by oremonte          #+#    #+#             */
/*   Updated: 2023/12/22 10:29:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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

int main() {
    // Prueba básica
    char source1[] = "Hola, mundo!";
    char destination1[50];
    ft_strcpy(destination1, source1);
    strcpy(destination1, source1);
    printf("Prueba básica:\n");
    printf("Cadena original: %s\n", source1);
    printf("Cadena copiada: %s\n", destination1);
   	printf("Cadena copiada (strcpy): %s\n\n", destination1);
   
   	// Prueba con cadena vacía
    char source2[] = "";
    char destination2[50];
    ft_strcpy(destination2, source);
    strcpy(destination2, source2);
    printf("Prueba con cadena vacía:\n");
    printf("Cadena original: %s\n", source2);
    printf("Cadena copiada: %s\n", destination2);
   	printf("Cadena copiada (strcpy): %s\n\n", destination2);

    // Prueba con destino más pequeño que la fuente
    char source3[] = "Prueba de longitud";
    char destination3[5];
    ft_strcpy(destination3, source3);
    strcpy(destination3, source3);
    printf("Prueba con destino más pequeño que la fuente:\n");
    printf("Cadena original: %s\n", source3);
    printf("Cadena copiada: %s\n", destination3);
   	printf("Cadena copiada (strcpy): %s\n\n", destination3);

    // Comparación con la función estándar strcpy de string.h
    char source4[] = "Comparacion";
    char destination4[50];
    ft_strcpy(destination4, source4);
    char destination5[50];
    strcpy(destination5, source4);
    printf("Comparación con la función strcpy de string.h:\n");
    printf("Cadena original: %s\n", source4);
    printf("Cadena copiada (ft_strcpy): %s\n", destination4);
    printf("Cadena copiada (strcpy): %s\n", destination5);

    return 0;
}
