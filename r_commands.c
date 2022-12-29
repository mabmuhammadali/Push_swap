/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:42:23 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/12 13:44:01 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rarb(t_list **lst)
{
	t_list	*tmp;
	t_list	*lstcpy;

	lstcpy = *lst;
	ft_lstadd_back(&lstcpy, ft_lstnew(lstcpy->content));
	tmp = lstcpy->next;
	free (*lst);
	*lst = tmp;
}

void	ft_ra(t_list **lst)
{
	ft_rarb(lst);
	ft_printf("ra\n");
}

void	ft_rb(t_list **lst)
{
	ft_rarb(lst);
	ft_printf("rb\n");
}

void	ft_rr(t_list **a_lst, t_list **b_lst)
{
	ft_rarb(a_lst);
	ft_rarb(b_lst);
	ft_printf("rr\n");
}
