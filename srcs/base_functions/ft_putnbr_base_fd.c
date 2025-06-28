/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:59:19 by nidruon           #+#    #+#             */
/*   Updated: 2025/06/28 21:24:21 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(unsigned long nb, char *base, int fd)
{
	unsigned int	len;

	len = (unsigned int)ft_strlen(base);
	if (nb >= len)
	{
		ft_putnbr_base_fd(nb / len, base, fd);
		ft_putnbr_base_fd(nb % len, base, fd);
	}
	else
		ft_putchar_fd(base[nb], fd);
}