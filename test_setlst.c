/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:23:08 by sshakya           #+#    #+#             */
/*   Updated: 2020/12/19 06:05:03 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		ts_flagchar(int n)
{
	char	c;
	char	*flag;

	flag = "%cspidux";

	c = flag[n];

	return (c);
}

void	ft_clearlst(t_pfdata *head)
{
	t_pfdata	*lst;
	t_pfdata	*tmp;

	lst = head;
	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

int				main (void)
{
	char		*test;
	char		**tab;
	int			i;
	t_pfdata	*res;

	i = 0;
	test = "%010uthis is a testX%-10.111c another testX%%test%cX%c";

	printf("-----------------------------\n");
	printf("------- TEST STRING ---------\n"); 
	printf("-----------------------------\n");
	printf("= %s\n", test);
	printf("-----------------------------\n");
	printf("-----------------------------\n");
	printf("--- TESTING FT_SETLIST ---\n");
	printf("-----------------------------\n");
	
	//creating table from string
	
	tab = ft_pfsplit(test);
	
	if (tab == NULL)
	{
		printf("test = NULL");
		return (0);
	}
	//creating list from table
	res = ft_pfsetlist(tab);
	
	i = 0; 
	while (res->next != NULL && tab[i] != NULL)
	{
		printf("[%d] = %s\n", i + 1, tab[i]);
		i++;

		printf("\n   format  [%c]\n", ts_flagchar(res->format));
		printf("  flag[-] = %d\n", res->flags.left);
		printf("  flag[0] = %d\n", res->flags.zero);
		printf("  flag[w] = %d\n", res->flags.fwidth);
		printf("  flag[.] = %d\n", res->flags.precision);
		printf("  flag[w] = %d\n", res->flags.pwidth);
		printf("\n  string = %s\n", res->str);
		res = res->next;
		printf("-----------------------------\n");
		printf("-----------------------------\n");
	}
	printf("[%d] = %s\n", i + 1, tab[i]);

	printf("\n    format  [%c]\n", ts_flagchar(res->format));
	printf("  flag [-] = %d\n", res->flags.left);
	printf("  flag [0] = %d\n", res->flags.zero);
	printf("  flag [w] = %d\n", res->flags.fwidth);
	printf("  flag [.] = %d\n", res->flags.precision);
	printf("  flag [w] = %d\n", res->flags.pwidth);
	printf("\n  string = %s\n", res->str);
	printf("-----------------------------\n");

	//free table
	while (i > 0)
	{
		free(tab[i]);
			i--;
	}
	free(tab[0]);
	free(tab);
	//free list
	res = res->head;
	ft_clearlst(res);
	return (0);
}


