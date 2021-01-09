/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setlst2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:23:08 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/09 01:04:33 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int				main (void)
{
	char		*test1;
	char		*test2;
	char		**tab1;
	char		**tab2;
	int			i;
	int			j;
	int			k;
	int			l;
	t_pfdata	*res1;
	t_pfdata	*res2;

	i = 0;
	test1 = "%0#*.10dtest1%-5.ctest2%%test3";
	//test2 = "%-*.*10utest1%0*.ctest2%s";
	test2 = "%-10.11stest1%0.ctest2%d";

	printf("--------------------------------------------------\n");
	printf("------- TEST STRING ------------------------------\n"); 
	printf("--------------------------------------------------\n");
	printf("= %s\n", test1);
	printf("= %s\n", test2);
	printf("--------------------------------------------------\n");
	printf("--------------------------------------------------\n");
	printf("--- TESTING FT_SETLIST ---------------------------\n");
	printf("--------------------------------------------------\n");

	//creating table from string

	tab1 = pf_split(test1);
	tab2 = pf_split(test2);

	char	*s1;
	char	ch1;
	int		num;

	s1 = "testing123";
	ch1 = 'z';
	num = 100;

	if (tab1 == NULL || tab2 == NULL)
	{
		printf("test = NULL");
		return (0);
	}
	//creating list from table
	res1 = pf_setlist(tab1, 42, num, 456 ,ch1);
	res2 = pf_setlist(tab2, s1, ch1, num);

	i = 0;

	//set width of output
	j = 16;
	k = 9;
	l = 11;

	while (i < 2)
	{
		printf("[%d] = %-*s|| ", i + 1, j, tab1[i]);
		printf("[%d] = %-*s\n", i + 4, j, tab2[i]);
		i++;

		printf("--------------------------------------------------\n");
		printf("    format  [%c]", res1->format);
		printf("       ||    format  [%c]\n", res2->format);
		printf("  flag [-] = %-*d||", k, res1->flags.left);
		printf("  flag [-] = %-*d\n", k, res2->flags.left);
		printf("  flag [0] = %-*d||", k, res1->flags.zero);
		printf("  flag [0] = %-*d\n", k, res2->flags.zero);
		printf("  flag [#] = %-*d||", k, res1->flags.hash);
		printf("  flag [#] = %-*d\n", k, res2->flags.hash);
		printf("  flag [+] = %-*d||", k, res1->flags.plus);
		printf("  flag [+] = %-*d\n", k, res2->flags.plus);
		printf("  flag [ ] = %-*d||", k, res1->flags.space);
		printf("  flag [ ] = %-*d\n", k, res2->flags.space);
		printf("  flag [*] = %-*d||", k, res1->flags.asterisk);
		printf("  flag [*] = %-*d\n", k, res2->flags.asterisk);
		printf("  flag [w] = %-*d||", k, res1->flags.fwidth);
		printf("  flag [w] = %-*d\n", k, res2->flags.fwidth);
		printf("  flag [.] = %-*d||", k, res1->flags.precision);
		printf("  flag [.] = %-*d\n", k, res2->flags.precision);
		printf("  flag [w] = %-*d||", k, res1->flags.pwidth);
		printf("  flag [w] = %-*d\n", k, res2->flags.pwidth);
		printf("  string = %-*s", l, res1->str);
		printf("||  string = %s\n", res2->str);
		//print out args res1
		if (res1->format == 's')
			printf("  arg = %-*s", l, res1->arg.str);
		else if (res1->format == 'c')
			printf("  arg = %-*c", l + 3, res1->arg.ch);
		else if (res1->format == 'd' || res1->format == 'u' || res1->format == 'i')
			printf("  arg = %-*d", l + 3, res1->arg.nbr);
		else 
			printf("  arg = %-*s", l + 3, NULL);
		//print out args res2
		if (res2->format == 's')
			printf("||  arg = %-*s\n", l, res2->arg.str);
		else if (res2->format == 'c')
			printf("||  arg = %-*c\n", l, res2->arg.ch);
		else if (res2->format == 'd' || res2->format == 'u' || res2->format == 'i')
			printf("||  arg = %-*d\n", l, res2->arg.nbr);
		else 
			printf("||  arg = %-*s\n", l + 3, NULL);
		res1 = res1->next;
		res2 = res2->next;

		printf("--------------------------------------------------\n");
		printf("--------------------------------------------------\n");
	}
	printf("[%d] = %-*s|| ", i + 1, j, tab1[i]);
	printf("[%d] = %-*s\n", i + 4, j, tab2[i]);

	printf("--------------------------------------------------\n");
	printf("    format  [%c]", res1->format);
	printf("       ||    format  [%c]\n", res2->format);
	printf("  flag [-] = %-*d||", k, res1->flags.left);
	printf("  flag [-] = %-*d\n", k, res2->flags.left);
	printf("  flag [0] = %-*d||", k, res1->flags.zero);
	printf("  flag [0] = %-*d\n", k, res2->flags.zero);
	printf("  flag [#] = %-*d||", k, res1->flags.hash);
	printf("  flag [#] = %-*d\n", k, res2->flags.hash);
	printf("  flag [*] = %-*d||", k, res1->flags.asterisk);
	printf("  flag [*] = %-*d\n", k, res2->flags.asterisk);
	printf("  flag [w] = %-*d||", k, res1->flags.fwidth);
	printf("  flag [w] = %-*d\n", k, res2->flags.fwidth);
	printf("  flag [.] = %-*d||", k, res1->flags.precision);
	printf("  flag [.] = %-*d\n", k, res2->flags.precision);
	printf("  flag [w] = %-*d||", k, res1->flags.pwidth);
	printf("  flag [w] = %-*d\n", k, res2->flags.pwidth);
	printf("  string = %-*s", l, res1->str);
	printf("||  string = %s\n", res2->str);
	//print out args res1
	if (res1->format == 's')
		printf("  arg = %-*s", l, res1->arg.str);
	else if (res1->format == 'c')
		printf("  arg = %-*c", l + 3, res1->arg.ch);
	else if (res1->format == 'd' || res1->format == 'u' || res1->format == 'i')
		printf("  arg = %-*d", l + 3, res1->arg.nbr);
	else 
		printf("  arg = %-*s", l + 3, NULL);
	//print out args res2

	if (res2->format == 's')
		printf("||  arg = %-*s\n", l, res2->arg.str);
	else if (res2->format == 'c')
		printf("||  arg = %-*c\n", l, res2->arg.ch);
	else if (res2->format == 'd' || res2->format == 'u' || res2->format == 'i')
		printf("||  arg = %-*d\n", l, res2->arg.nbr);
	else 
		printf("||  arg = %-*s\n", l + 3, NULL);
	printf("--------------------------------------------------\n");
	//free table
	i = 0;
	while (i < 3)
	{
		free(tab1[i]);
		free(tab2[i]);
		i++;
	}
	free(tab1);
	free(tab2);

	//free list
	pf_clearlst(res1->head);
	pf_clearlst(res2->head);

	return (0);
}


