/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapelcha <rapelcha@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:08:50 by rapelcha          #+#    #+#             */
/*   Updated: 2022/11/07 15:38:42 by rapelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *type, ...);

//--------------------FORMAT----------------//

int	ft_printfc(int c);
int	ft_printfs(char *str);
int	ft_printfp(void *p);
int	ft_printfd(int n);
int	ft_printfu(unsigned int n);
int	ft_printfx(unsigned int n);
int	ft_printfxx(unsigned int n);
#endif