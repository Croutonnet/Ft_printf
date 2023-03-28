/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:06:48 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/14 09:11:06 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(const char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_printfc(va_arg(args, int));
	else if (type == 'd' || type == 'i')
		count += ft_printfd(va_arg(args, int));
	else if (type == 'p')
		count += ft_printfp(va_arg(args, void *));
	else if (type == 's')
		count += ft_printfs(va_arg(args, char *));
	else if (type == 'u')
		count += ft_printfu(va_arg(args, unsigned int));
	else if (type == 'x')
		count += ft_printfx(va_arg(args, unsigned int));
	else if (type == 'X')
		count += ft_printfxx(va_arg(args, unsigned int));
	else if (type == '%')
		count += ft_printfc('%');
	return (count);
}

int	ft_printf(const char *type, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start (args, type);
	while (type[i])
	{
		if (type[i] != '%')
			count += ft_printfc(type[i]);
		else
		{
			i++;
			count += ft_formats(type[i], args);
		}
		i++;
	}
	va_end(args);
	return (count);
}
