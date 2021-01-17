/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 00:40:03 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/17 04:24:47 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int			main(void)
{
	char	*str;
	char	*o;
	char	*f;
	int		wd;
	int		n;
	int		i;
	
	printf("----------------------------------------------\n");
	printf("-------- TESTING PRINTF HEX ------------------\n");
	printf("----------------------------------------------\n");
	
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	printf("   ||%-*s", wd, f);
	printf("||%s\n", o);
// 1
	i++;
	str = "%-#x";
	n = 12345;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 12345;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%#10x";
	n = 12345;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 4
	printf("----------------------------------------------\n");
	i++;
	str = "%#010x";
	n = 2147483647;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 5
	printf("----------------------------------------------\n");
	i++;
	str = "%#15x";
	n = 2147483647;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 6
	printf("----------------------------------------------\n");
	i++;
	str = "%-#15x";
	n = 2147483647;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");

	// TESTING PRECISION
	printf("----------------------------------------------\n");
	printf("----------------------------------------------\n");
	printf("\tTESTING PRECISION\n");
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");
// 1
	i = 1;
	str = "%#.15x";
	n = 1123456789;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%-#.5x";
	n = 1123456789;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 10;
	printf(" %d ||%10s||%-10i", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");

	printf("----------------------------------------------\n");
	printf("\tTESTING PRECISION AND WIDTH\n");
	printf("----------------------------------------------\n");
	i = 1;
	str = "%#15.10x";
	n = 123456;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
// 1
	printf("----------------------------------------------\n");
	i++;
	str = "%-#15.10x";
	n = 123456;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");
	i++;
	str = "%-#15.8x";
	n = 123456;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");
	i++;
	str = "%#15.8x";
	n = 1123456789;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");
	i++;
	str = "%#14.8x";
	n = 1123456789;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");
	i++;
	str = "%#14.9x";
	n = 1123456789;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");
	i++;
	str = "%#13.10x";
	n = 1123456789;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");

	i++;
	str = "%-#.x";
	n = 1123456789;
	printf(" %d ||%10s ||%u", i, str, n);
	printf("||");
	printf(str, n);
	printf("||\n");

// TESTING POINTER	
	printf("----------------------------------------------\n");
	printf("\tTESTING POINTER FORMAT\n");
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");
// 1
	i = 1;
	str = "%-10p";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, &n);
	printf("||\n");
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%10p";
	n = 123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, &n);
	printf("||\n");
// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%-19p";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, &n);
	printf("||\n");
// 4
	printf("----------------------------------------------\n");
	i++;
	str = "%19p";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, &n);
	printf("||\n");
	printf("----------------------------------------------\n");

	return (0);
}
