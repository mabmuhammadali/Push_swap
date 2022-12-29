/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:45:51 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/17 11:28:25 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_rrarrb(t_list **lst)
{
	t_list	*lstcpy;
	t_list	*tmp;

	lstcpy = *lst;
	tmp = lstcpy;
	while (lstcpy->next != 0)
		lstcpy = lstcpy->next;
	ft_lstadd_front(&tmp, ft_lstnew(lstcpy->content));
	lstcpy = tmp;
	while (lstcpy->next->next != 0)
		lstcpy = lstcpy->next;
	*lst = lstcpy->next;
	free (*lst);
	lstcpy->next = 0;
	*lst = tmp;
}

void	ft_rra(t_list **lst)
{
	ft_rrarrb(lst);
	ft_printf("rra\n");
}

void	ft_rrb(t_list **lst)
{
	ft_rrarrb(lst);
	ft_printf("rrb\n");
}

void	ft_rrr(t_list **a_lst, t_list **b_lst)
{
	ft_rrarrb(a_lst);
	ft_rrarrb(b_lst);
	ft_printf("rrr\n");
}
