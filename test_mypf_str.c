/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mypf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/21 15:58:18 by sshakya          ###   ########.fr       */
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
	test = "123456789";
	n = 5;
	str = "%*s";
	ft_printf(" %-2d||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n, test);
	ft_printf("||\n");
	printf("%3s||%10s ","pf", str);
	printf("||");
	printf(str, n, test);
	printf("||\n");

// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%.*s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n, test);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n, test);
	printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-.14s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-14s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");

// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%14.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");

// 6
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-14.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");

// 7
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%%*i 42 == |%*i|";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, 3, 42);
	ft_printf("||\n");
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, 3, 42);
	printf("||\n");
// 8
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%.s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, "hello");
	ft_printf("||\n");
		printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");
// 9
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%7.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, "yolo");
	ft_printf("||\n");
		printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, "yolo");
	printf("||\n");
// 10
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.7s%7.7s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, "hello", "world");
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, "hello", "world");
	printf("||\n");
// 11
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%7.3s%3.3s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, "hello", "world");
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, "hello", "world");
	printf("||\n");
// 12
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.3s%3.3s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, "hello", "world");
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, "hello", "world");
	printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-32s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, NULL);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, NULL);
	printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.6s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, NULL);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, NULL);
	printf("||\n");

	static char *s_hidden = "hi low\0don't print me lol\0";
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%3.s";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, s_hidden);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, s_hidden);
	printf("||\n");






	return (0);
}
