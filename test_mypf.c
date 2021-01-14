/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setlst3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:38:44 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/14 04:47:05 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	*fstr;
	char	*tstr;
//	char	ch;
	int		num;
//	int		w;
//	int		p;

	num = -1234567;
	fstr = "%10i|retstr1|%010i|retstr2|";
	tstr = "returnstring1";
	printf("-------------------------------------------\n");
	printf("format =|%s|i = %i|\n",fstr, num);
	printf("-------------------------------------------\n");
	ft_printf(fstr, num, num);
	printf("\n-------------------------------------------\n");
	num = 1234567;
	fstr = "%+10i|retstr1|%-10i|retstr2|";
	printf("-------------------------------------------\n");
	printf("format =|%s|i = %i|\n",fstr, num);
	printf("-------------------------------------------\n");
	ft_printf(fstr, num, num);
	printf("\n-------------------------------------------\n");
	fstr = "%*d|retstr1|%.12d|retstr2|";
	printf("format = %s",fstr);
	printf("\n-------------------------------------------\n");
	ft_printf(fstr, 12, num, num);
	printf("\n-------------------------------------------\n");
	fstr = "%#x|check|%#x|check|";
	printf("format = %s|",fstr);
	printf("\n-------------------------------------------\n");
	ft_printf(fstr, num, num);
	printf("\n-------------------------------------------\n");
	fstr = "%-10x|retstr1|%10x|retstr2|";
	printf("format = %s",fstr);
	printf("\n-------------------------------------------\n");
	ft_printf(fstr, num, num);
	printf("\n-------------------------------------------\n");
	printf("\n-------------------------------------------\n");
	fstr = "%s|%20s|%.9s|";
	printf("format = %s|",fstr);
	printf("\n-------------------------------------------\n");
	ft_printf(fstr, tstr, tstr, tstr);
	printf("\n-------------------------------------------\n");
	fstr = "%10.5s|%-20s|%10.10s|";
	printf("format = %s|",fstr);
	printf("\n-------------------------------------------\n");
	ft_printf(fstr, tstr, tstr, tstr);
	printf("\n-------------------------------------------\n");

	return (0);
}

