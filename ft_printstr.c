/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:04:27 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/12/12 22:42:47 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_printchar(char c)
{
	if (!c)
		return (0);
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	ret_val;
	int	len;

	ret_val = 0;
	if (!str)
		return (0);
	len = ft_strlen(str);
	ret_val = (int)write(1, str, len);
	return (ret_val);
}

int	ft_printpercent(char c)
{
	(void) c;
	ft_printchar('%');
	return (1);
}
