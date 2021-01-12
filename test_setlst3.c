/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setlst3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:38:44 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/12 16:43:12 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	*fstr;
//	char	*tstr;
//	char	ch;
	int		num;
//	int		w;
//	int		p;

	num = 12345678;
	fstr = "%010i this is a test %010i another test\n";
	printf("-------------------------------------------\n");
	printf("format = %s",fstr);
	printf("-------------------------------------------\n");
	ft_printf(fstr, num, num);
	printf("-------------------------------------------\n");
	fstr = "%d this is a test %d another test\n";
	printf("format = %s",fstr);
	printf("-------------------------------------------\n");
	ft_printf(fstr, num, num);
	printf("-------------------------------------------\n");
	fstr = "%#x this is a test %#x another test\n";
	printf("format = %s",fstr);
	printf("-------------------------------------------\n");
	ft_printf(fstr, num, num);
	fstr = "%-10x this is a test %-10x another test\n";
	printf("-------------------------------------------\n");
	printf("format = %s",fstr);
	printf("-------------------------------------------\n");
	ft_printf(fstr, num, num);
	printf("-------------------------------------------\n");

	return (0);
}

