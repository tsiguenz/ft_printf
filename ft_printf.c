/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:22:49 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/12/09 23:56:13 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_parser(char *format, va_list param)
{
	ft_putchar(va_arg(param, int));
	return (1);
}

int ft_printf(const char *format, ...)
{
	int		i;
	int		ret_val;
	va_list	param;

	i = 0;
	ret_val = 0;
	va_start(param, format);
	while (format[i])
	{
		if (format[i] == '%')
			ret_val = ft_parser((char *)(format + i + 1), param);
		else
			write(1, &format[i], 1);
		i++;
	}
	return (ret_val + i - 1);
}

int	main(void)
{
	printf("%d", ft_printf("12345%\n", 'e'));
	return (0);
}
