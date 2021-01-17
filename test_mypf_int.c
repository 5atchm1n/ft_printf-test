/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mypf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/17 04:46:06 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int			main(void)
{
	char	*str;
//	char	*test;
	char	*o;
	char	*f;
	int		wd;
	int		n;
	int		i;
	
	ft_printf("----------------------------------------------\n");
	ft_printf("-------- TESTING FT_PRINTF RETURN ------------\n");
	ft_printf("----------------------------------------------\n");
	
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	ft_printf("   ||%-*s", wd, f);
	ft_printf("||%s\n", o);

// 1
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-10d";
	n = 10;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+08d";
	n = -123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+09d";
	n = -123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+010d";
	n = -123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+011d";
	n = -123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");

// 6
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+09d";
	n = 123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 7
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+010d";
	n = 123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 8
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+011d";
	n = 123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");

// TESTING PRECISION
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING PRECISION\n");
	i = 1;
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
	str = "%-.5d";
	n = 123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%0.5d";
	n = 123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// TESTING PRECISION
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING PRECISION AND WIDTH\n");
	ft_printf("----------------------------------------------\n");
	i = 1;
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
// 1
	ft_printf("----------------------------------------------\n");
	str = "%-15.15d";
	n = 123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%15.20d";
	n = 123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#15.10x";
	n = 1123456789;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 4	
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-10.5i";
	n = 10;
	ft_printf(" %d || %10i||%10s", i, n, str);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	i++;
// TESTING PRECISION
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING PRECISION AND WIDTH\n");
	ft_printf("----------------------------------------------\n");
	unsigned int u;
	i = 1;
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
// 1	
	ft_printf("----------------------------------------------\n");
	str = "%-15.15u";
	u = 4294967295;
	ft_printf(" %d || %10u||%10s", i, u, str);
	ft_printf("||");
	ft_printf(str, u);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%15.20u";
	u = 4294967295;
	ft_printf(" %d || %10u||%10s", i, u, str);
	ft_printf("||");
	ft_printf(str, u);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#15.10x";
	u = 4199999999;
	ft_printf(" %d || %10u||%10s", i, u, str);
	ft_printf("||");
	ft_printf(str, u);
	ft_printf("||\n");
// 4	
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-10.5u";
	u = 4199999999;
	ft_printf(" %d || %10u||%10s", i, u, str);
	ft_printf("||");
	ft_printf(str, u);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");
	return (0);
}
