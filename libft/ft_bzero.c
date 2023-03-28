/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:33:01 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/03 18:55:09 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str1;
	size_t	i;

	if (!s)
		return ;
	str1 = s;
	i = 0;
	while (i < n)
	{
		str1[i] = '\0';
		i++;
	}
}
