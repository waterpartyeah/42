/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oremonte <oremonte@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:19:39 by oremonte          #+#    #+#             */
/*   Updated: 2024/01/08 18:55:03 by oremonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 65 || c <= 90) || (c >= 97 || c <= 122))
		return (1);
	else
		return (0);
}
