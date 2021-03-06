/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:20:21 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/05 19:11:48 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*tab;

	if (!lst || !f)
		return ;
	tab = lst;
	while (tab)
	{
		tmp = (*tab).next;
		f(tab);
		tab = tmp;
	}
}
