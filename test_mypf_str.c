/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mypf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/28 22:45:48 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int			main(void)
{
	char	*str;
	char	*test;
	char	*o;
	char	*f;
	int		wd;
	int		n;
	int		i;
	int		count;

	ft_printf("----------------------------------------------\n");
	ft_printf("-------- TESTING FT_PRINTF STRING ------------\n");
	ft_printf("----------------------------------------------\n");
	
	o = "output";
	f ="format";
	wd = 10;
	i = 0;

	// TESTING STRING FLAGS
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
	i = 1;
	test = "this #is a #test";
	n = 5;
	count = 0;
	str = "%*s";
	ft_printf(" %-2d||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, n, test);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf("%3s||%10s ","pf", str);
	printf("||");
	count = printf(str, n, test);
	printf("||%3d", count);
	printf("||\n");

// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%.*s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, n, test);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, n, test);
	printf("||%3d", count);
	printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-.14s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, test);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, test);
	printf("||%3d", count);
	printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-14s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, test);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, test);
	printf("||%3d", count);
	printf("||\n");

// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%14.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, test);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, test);
	printf("||%3d", count);
	printf("||\n");

// 6
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-14.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, test);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, test);
	printf("||%3d", count);
	printf("||\n");

// 7
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%%*i 42 == |%*i|";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, 3, 42);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, 3, 42);
	printf("||%3d", count);
	printf("||\n");
// 8
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%.s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, "hello");
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, test);
	printf("||%3d", count);
	printf("||\n");
// 9
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%7.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	count = ft_printf(str, "yolo");
	ft_printf("||%3d", count);
	ft_printf("||\n");
		printf(" %d ||%10s ", i, str);
	printf("||");
	count = printf(str, "yolo");
	printf("||%3d", count);
	printf("||\n");
// 10
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.7s%7.7s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, "hello", "world");
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf(str, "hello", "world");
	printf("||%3d", count);
	printf("||\n");
// 11
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%7.3s%3.3s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, "hello", "world");
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, "hello", "world");
	printf("||%3d", count);
	printf("||\n");
// 12
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.3s%3.3s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, "hello", "world");
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf(str, "hello", "world");
	printf("||%3d", count);
	printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-32s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, NULL);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf(str, NULL);
	printf("||%3d", count);
	printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.6s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, NULL);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf(str, NULL);
	printf("||%3d", count);
	printf("||\n");

	static char *s_hidden = "hi low\0don't print me lol\0";
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, s_hidden);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf(str, s_hidden);
	printf("||%3d", count);
	printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%2c";
	char c = '#';
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, c);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf(str, c);
	printf("||%3d", count);
	printf("||\n");
	str = "%-2c";
	c = '#';
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf(str, c);
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf(str, c);
	printf("||%3d", count);
	printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%5%";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf("%5%");
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf("%5%");
	printf("||%3d", count);
	printf("||\n");
	str = "%-5%";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	count = ft_printf("%05%");
	ft_printf("||%3d", count);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	count = printf("%-5%");
	printf("||%3d", count);
	printf("||\n");






	return (0);
}
