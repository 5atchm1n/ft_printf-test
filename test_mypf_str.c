/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mypf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/19 02:55:00 by sshakya          ###   ########.fr       */
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
	ft_printf(str, NULL);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");
	return (0);
}
