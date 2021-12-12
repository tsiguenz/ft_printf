/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:26:39 by tsiguenz          #+#    #+#             */
/*   Updated: 2021/12/12 20:33:18 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_strlen(char *str);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printpercent(char c);
int	ft_printnbr(int nb);
int	ft_printunsigned(unsigned int nb);
int	ft_printnbr_base(int nb, char *base);
int	ft_printptr(unsigned long nb, char *base);
int	ft_printf(const char *format, ...);

#endif
