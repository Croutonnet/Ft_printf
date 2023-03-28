/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:49:30 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/08 12:57:45 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnstr(const char *big, const char *little, size_t len)
{	
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (0);
	j = 0;
	i = 0;
	if (!*little)
		return (0);
	while (j <= len && big[j])
	{
		while (little[i] == big[j + i] && j + i < len && big[j + i] != '\0')
			i++;
		if (little[i] == '\0')
			return (1);
		j++;
		i = 0;
	}
	return (0);
}
