/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:50:43 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/12/10 18:23:10 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long nb, char* base)
{
	int					ret_val;

	ret_val = 0;
	if (nb >= 16)
		ret_val += ft_printptr(nb / 16, base);
	ret_val += ft_printchar(base[nb % 16]);
	return (ret_val);
}
