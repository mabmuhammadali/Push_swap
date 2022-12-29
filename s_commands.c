/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:42:48 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/17 11:26:49 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_sasb(t_list **lst)
{
	t_list	*lstcpy;
	int		i;
	void	*tmp;

	lstcpy = *lst;
	i = ft_lstsize(lstcpy);
	if (i > 1)
	{
		tmp = lstcpy->content;
		lstcpy->content = lstcpy->next->content;
		lstcpy->next->content = tmp;
	}
	*lst = lstcpy;
}

void	ft_sa(t_list **a)
{
	ft_sasb(a);
	ft_printf("sa\n");
}

void	ft_sb(t_list **b)
{
	ft_sasb(b);
	ft_printf("sb\n");
}

void	ft_ss(t_list **a, t_list **b)
{
	ft_sasb(a);
	ft_sasb(b);
	ft_printf("ss\n");
}
