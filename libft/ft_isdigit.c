/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:11:13 by rapelcha          #+#    #+#             */
/*   Updated: 2022/10/18 09:47:14 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit( int c)
{
	int	flag;

	flag = 0;
	if (c >= 48 && c <= 57)
		return (flag + 1);
	else
		return (flag);
}
