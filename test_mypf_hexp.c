/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mypf_hexp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 00:40:03 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/17 04:46:27 by sshakya          ###   ########.fr       */
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
	
	ft_printf("----------------------------------------------\n");
	ft_printf("-------- TESTING FT_PRINTF RETURN ------------\n");
	ft_printf("----------------------------------------------\n");
	
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	ft_printf("   ||%-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");

	ft_printf("\tTESTING HEX\n");
	ft_printf("----------------------------------------------\n");
// 1
	i++;
	str = "%-#x";
	n = 12345;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 12345;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#10x";
	n = 12345;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#010x";
	n = 2147483647;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#15x";
	n = 2147483647;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 6
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#15x";
	n = 2147483647;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");

	// TESTING PRECISION
	ft_printf("----------------------------------------------\n");
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING PRECISION\n");
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
// 1
	i = 1;
	str = "%#.15x";
	n = 1123456789;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#.5x";
	n = 1123456789;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 3
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 10;
	ft_printf(" %d ||%10s||%-10i", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");

	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING PRECISION AND WIDTH\n");
	ft_printf("----------------------------------------------\n");
	i = 1;
	str = "%#15.10x";
	n = 123456;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
// 1
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#15.10x";
	n = 123456;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%-#15.8x";
	n = 123456;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#15.8x";
	n = 1123456789;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#14.8x";
	n = 1123456789;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#14.9x";
	n = 1123456789;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%#13.10x";
	n = 1123456789;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");

	i++;
	str = "%-#.x";
	n = 1123456789;
	ft_printf(" %d ||%10s ||%u", i, str, n);
	ft_printf("||");
	ft_printf(str, n);
	ft_printf("||\n");

// TESTING POINTER	
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING POINTER FORMAT\n");
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	ft_printf("----------------------------------------------\n");
// 1
	i = 1;
	str = "%-10p";
	n = 10;
	ft_printf(" %d ||%10s ", i, str);
	ft_printf("||");
	ft_printf(str, &n);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%10p";
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

	return (0);
}
