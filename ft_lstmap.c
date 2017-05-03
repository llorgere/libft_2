#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
		t_list	*tmp;
		t_list	*tmpf;
		t_list	*tab;
		t_list	*lstf;
		int		max;

		max = 0;
		tab = lst;
		while ((*tab).next != NULL)
		{
				tab = (*tab).next;
				max++;
		}
		if (!(lstf = (t_list *)malloc(sizeof(*lst) * (max + 1))))
			return (NULL);
//		tab = lst;
		while (max >= 0)
		{
			tmp = (*lst).next;
			tmpf = (*lstf).next;
			lstf = f(lst);
			free(lst);
			lst = tmp;
			lstf = tmpf;
			max--;
		}
		return (tab);
}
