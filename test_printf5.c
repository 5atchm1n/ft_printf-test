/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/20 06:25:23 by sshakya          ###   ########.fr       */
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
	
	printf("----------------------------------------------\n");
	printf("-------- TESTING printf STRING ------------\n");
	printf("----------------------------------------------\n");
	
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	// TESTING STRING FLAGS
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");
	i = 1;
	test = "123456789";
	n = 5;
	str = "%*s";
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n, test);
	printf("||\n");
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%.*s";
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n, test);
	printf("||\n");
// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%-.14s";
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");

// 4
	printf("----------------------------------------------\n");
	i++;
	str = "%-14s";
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");
// 5
	printf("----------------------------------------------\n");
	i++;
	str = "%14.5s";
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, test);
	printf("||\n");
// 6
	printf("----------------------------------------------\n");
	i++;
	str = "%-14.5s";
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, NULL);
	printf("||\n");
	printf("----------------------------------------------\n");
// 6
	printf("----------------------------------------------\n");
	i++;
	str = "%%";
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf("%5%");
	printf("||\n");
	printf("----------------------------------------------\n");

	return (0);
}
