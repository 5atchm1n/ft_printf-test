/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/18 22:59:44 by sshakya          ###   ########.fr       */
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
//	int		n;
	int		i;

	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	printf("----------------------------------------------\n");
	printf("\tTESTING %%G %%E %%F - FLOAT & DOUBLE\n");
	printf("----------------------------------------------\n");
	printf("size of char = %lu\n", sizeof(char));
	printf("size of unsigned char = %lu\n", sizeof(unsigned char));
	printf("size of short  = %lu\n", sizeof(short));
	printf("size of unsigned short = %lu\n", sizeof(unsigned short));
	printf("size of int = %lu\n", sizeof(int));
	printf("size of long = %ju\n", sizeof(long));
	printf("size of float= %ju\n", sizeof(float));
	printf("size of double = %ju\n", sizeof(double));
// TESTING PRECISION
	i = 1;
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
//	float fl = 000.99999997845890820;
// 7
	double fl  = 0.012345678912300; // 8
	double fl2 = 0.0012345678912300; // 7
	double fl3 = 0.00012345678912300;  // 6
	double fl4 = 0.000012345678912300; // 5
	double fl5 = 0.00000123400; // 5
	printf("----------------------------------------------\n");
	i++;	
	str = "%f";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");
printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl3);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl4);
	printf("||\n");
printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl5);
	printf("||\n");
	
// 8
	printf("----------------------------------------------\n");
	i++;
	str = "%g";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");
printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl3);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl4);
	printf("||\n");
printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl5);
	printf("||\n");

// 9	
	printf("----------------------------------------------\n");
	i++;
	str = "%e";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl3);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl4);
	printf("||\n");
printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl5);
	printf("||\n");

	printf("----------------------------------------------\n");

// 1	
	printf("f1 = %15.15f & f2 = %15.15f\n", fl, fl2);
	printf("----------------------------------------------\n");
	str = "%.10f";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%.10g";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");

// 3
	printf("----------------------------------------------\n");
	i++;	
	str = "%.10e";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");

// 4
	printf("----------------------------------------------\n");
	i++;
	str = "%20.10f";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");

// 5
	printf("----------------------------------------------\n");
	i++;
	str = "%20.10g";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");
// 6
	printf("----------------------------------------------\n");
	i++;	
	str = "%20.10e";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl);
	printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, fl2);
	printf("||\n");

	return (0);
}
