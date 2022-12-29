/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:04:56 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/12 15:21:57 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*acpy;
	t_list	*bcpy;
	t_list	*tmp;

	acpy = *a;
	bcpy = *b;
	ft_lstadd_front(&acpy, ft_lstnew(bcpy->content));
	*a = acpy;
	tmp = bcpy->next;
	free (*b);
	*b = tmp;
	ft_printf("pa\n");
}

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*acpy;
	t_list	*bcpy;
	t_list	*tmp;

	acpy = *a;
	bcpy = *b;
	ft_lstadd_front(&bcpy, ft_lstnew(acpy->content));
	*b = bcpy;
	tmp = acpy->next;
	free (*a);
	*a = tmp;
	ft_printf("pb\n");
}
