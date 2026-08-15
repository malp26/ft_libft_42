/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaylik@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:00:00 by mbaylik           #+#    #+#             */
/*   Updated: 2026/08/15 09:49:55 by mbaylik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
#include <stdio.h>
//int main()
//{
//	t_list *list;
//	
//	list = ft_lstnew("bir");
//	ft_lstadd_front(&list, ft_lstnew("iki"));
//	ft_lstadd_back(&list, ft_lstnew("uc"));
//	printf("%s\n", (char *)ft_lstlast(list)->content);
//	free(list);
//	return(0);
//}