/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/mail/root>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:30:06 by root              #+#    #+#             */
/*   Updated: 2023/12/22 11:04:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main() {
    char source[] = "Hola, mundo!";
    char destination[10];

    // Copiar hasta 9 caracteres de source a destination
    strncpy(destination, source, 9);

    // Asegurarse de que la cadena de destino tenga un carácter nulo al final
    //destination[9] = '\0';

    printf("FUNCIÓN ORIGINAL \n");
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n\n", destination);
	ft_strncpy(destination, source, 9);
    printf("FUNCIÓN ft_strncpy \n");
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n\n", destination);
	// Prueba 1: Copiar toda la cadena
    printf("Prueba 1:\n");
    ft_strncpy(destination, source, sizeof(destination) - 1);
    destination[sizeof(destination) - 1] = '\0';
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n\n", destination);

    // Prueba 2: Copiar solo una parte de la cadena
    printf("Prueba 2:\n");
    ft_strncpy(destination, source, 5);
    destination[5] = '\0';
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n\n", destination);

    // Prueba 3: Copiar más caracteres que los disponibles en la cadena de origen
    printf("Prueba 3:\n");
    ft_strncpy(destination, source, sizeof(destination));
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n\n", destination);

    // Prueba 4: Copiar una cadena vacía
    printf("Prueba 4:\n");
    char emptySource[] = "";
    ft_strncpy(destination, emptySource, sizeof(destination) - 1);
    destination[sizeof(destination) - 1] = '\0';
    printf("Cadena original: %s\n", emptySource);
    printf("Cadena copiada: %s\n\n", destination);
    return 0;
}
