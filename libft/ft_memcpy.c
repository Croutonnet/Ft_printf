/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:54:51 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/03 19:40:42 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	if (!dest || !src)
		return (NULL);
	if (dest != NULL || src != NULL)
	{
		while (n--)
			*pdest++ = *psrc++;
	}
	return (dest);
}
