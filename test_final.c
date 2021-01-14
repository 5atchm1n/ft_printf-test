/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_final.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/14 05:55:50 by sshakya          ###   ########.fr       */
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
	ft_printf("-------- TESTING PRINTF RETURN ---------------\n");
	ft_printf("----------------------------------------------\n");
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
// 1
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-10d";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%012d";
	n = -123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+012d";
	n = 123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#19x";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");

	ft_printf("\tTESTING PRECISION\n");
// TESTING PRECISION
	i = 1;
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
str = "%-.5d";
	n = 123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%0.5d";
	n = 123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#.19x";
	n = 1123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#.5x";
	n = 1123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	i++;
	ft_printf("----------------------------------------------\n");
	i++;
	ft_printf("\tTESTING PRECISION AND WIDTH\n");
// TESTING PRECISION
	i = 1;
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
str = "%-15.15d";
	n = 123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%15.20d";
	n = 123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#15.10x";
	n = 1123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#15.10x";
	n = 1123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#20.15x";
	n = 1123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-10.5i";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	i++;

	// TESTING STRING FLAGS
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING STRING FLAGS\n");
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
	i = 1;
	test = "123456789";
	n = 5;
	str = "%*s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n, test);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%.*s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, n, test);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-.14s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");

// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-14s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");
// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%14.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");
// 6
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-14.5s";
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, test);
	ft_printf("||\n");

	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING POINTER FORMAT\n");
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
// 1
	i++;
	str = "%-10p";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, &n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%010p";
	n = 123456789;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, &n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-19p";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, &n);
	ft_printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%19p";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, &n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");

/*
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING N COUNTER\n");
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");

// TESTING HOW TO USE %n flag

	i = 1;
	str = "%#x%010n";
	n = 10;
	int t;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n, &t);
	printf("|| n = %d", t);
	printf("||\n");
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%010i%n";
	n = 256;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n, &t);
	printf("|| n = %d", t);
	printf("||\n");
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%-010i%n";
	n = 256;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n, &t);
	printf("|| n = %d", t);
	printf("||\n");
// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%10i%n";
	n = 256;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n, &t);
	printf("|| n = %d", t);
	printf("||\n");
// 4
	printf("----------------------------------------------\n");

// ERROR TEST	
	str = "%-10#x";
	n = 10;
	printf("       ||%10s ", str);
	printf("||");
	printf(str, n);
	printf("|| defaults to str ?\n");
	printf("-----------------------------------\n");
*/
	return (0);
}
