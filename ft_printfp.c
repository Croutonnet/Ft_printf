/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:35:47 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/09 12:55:23 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convx(uintptr_t p, int *count)
{
	if (p > 15)
	{
		convx(p / 16, count);
		convx(p % 16, count++);
	}
	else
	{
		if (p > 9)
			(*count) += ft_printfc(p + 87);
		else
			(*count) += ft_printfc(p + 48);
	}
}

int	ft_printfp(void *p)
{
	int	count;

	count = 2;
	ft_printfs("0x");
	convx((uintptr_t)p, &count);
	return (count);
}
