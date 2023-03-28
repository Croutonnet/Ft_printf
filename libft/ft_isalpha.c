/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:00:35 by rapelcha          #+#    #+#             */
/*   Updated: 2022/10/18 10:34:25 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	int	flag;

	flag = 0;
	if (a >= 65 && a <= 90)
		return (flag + 1);
	else if (a >= 97 && a <= 122)
		return (flag + 2);
	else
		return (flag);
}
