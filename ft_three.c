/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:10:09 by mabdulla          #+#    #+#             */
/*   Updated: 2022/10/18 11:10:22 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_list **a)
{
	t_list	*acpy;

	acpy = *a;
	if (ft_atoi(acpy->content) > ft_atoi(acpy->next->content)
		&& ft_atoi(acpy->content) < ft_atoi(acpy->next->next->content))
		ft_sa(a);
	else if (ft_atoi(acpy->next->content) < ft_atoi(acpy->content)
		&& ft_atoi(acpy->next->content) > ft_atoi(acpy->next->next->content))
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (ft_atoi(acpy->next->next->content) < ft_atoi(acpy->content)
		&& ft_atoi(acpy->next->next->content) > ft_atoi(acpy->next->content))
		ft_ra(a);
	else if (ft_atoi(acpy->next->next->content) > ft_atoi(acpy->content)
		&& ft_atoi(acpy->next->next->content) < ft_atoi(acpy->next->content))
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (ft_atoi(acpy->content) < ft_atoi(acpy->next->content)
		&& ft_atoi(acpy->content) > ft_atoi(acpy->next->next->content))
		ft_rra(a);
}
