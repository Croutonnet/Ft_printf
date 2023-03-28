/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:54:56 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/08 13:27:59 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr(const char *s, int c)
{
	char	find;
	int		flag;

	find = c;
	flag = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == find)
			return (1);
		s++;
	}
	if (*s == find)
		return (1);
	return (0);
}
