/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:42:21 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/12/12 20:09:46 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int	ret;

	ret = 0;
	if (nb >= 0 && nb <= 9)
		ret += ft_printchar(nb + '0');
	else if (nb == -2147483648)
		ret += (int) write(1, "-2147483647", 11);
	else if (nb < 0)
	{
		ret += (int) write(1, "-", 1);
		ret += ft_printnbr(-nb);
	}
	else
	{
		ret += ft_printnbr(nb / 10);
		ret += ft_printnbr(nb % 10);
	}
	return (ret);
}

int	ft_printunsigned(unsigned int nb)
{
	int	ret;

	ret = 0;
	if (nb >= 0 && nb <= 9)
		ret += ft_printchar(nb + '0');
	else
	{
		ret += ft_printnbr(nb / 10);
		ret += ft_printnbr(nb % 10);
	}
	return (ret);
}

int	ft_printnbr_base(int nb, char *base)
{
	int	ret;

	ret = 0;
	if (nb == -2147483648)
		ret += (int) write(1, "80000000", 8);
	else if (nb >= 0 && nb <= ft_strlen(base))
		ret += ft_printchar(base[nb]);
	else if (nb < 0)
	{
		ret += (int) write(1, "-", 1);
		ret += ft_printnbr_base(-nb, base);
	}
	else
	{
		ret += ft_printnbr_base(nb / ft_strlen(base), base);
		ret += ft_printnbr_base(nb % ft_strlen(base), base);
	}
	return (ret);
}

int	ft_printptr(unsigned long nb, char *base)
{
	int	ret;

	ret = 0;
	if (nb >= 0 && nb <= 15)
		ret += ft_printchar(base[nb]);
	else
	{
		ret += ft_printptr(nb / 16, base);
		ret += ft_printptr(nb % 16, base);
	}
	return (ret);
}
