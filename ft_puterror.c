/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:07:24 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/07 11:07:48 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_puterror(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(2, &str[i], 1);
		i++;
	}
}