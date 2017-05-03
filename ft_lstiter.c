/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 19:20:21 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/02 19:26:14 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
		t_list	*tmp;
		t_list	*tab;


		tab = lst;
		while (tab)
		{
				tmp = (*tab).next;
				f(tab);
				tab = tmp;
		}
}
