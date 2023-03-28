/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:35:52 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/07 15:31:30 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(unsigned int n)
{
	int	size;

	size = 1;
	while (n > 15)
	{
		n /= 16;
		size++;
	}
	return (size);
}

int	ft_printfx(unsigned int n)
{
	if (n > 15)
	{
		ft_printfx(n / 16);
		ft_printfx(n % 16);
	}
	else
	{
		if (n > 9)
			ft_printfc(n + 87);
		else
			ft_printfc(n + 48);
	}
	return (ft_size(n));
}
