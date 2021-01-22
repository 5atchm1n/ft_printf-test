/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/21 16:54:46 by sshakya          ###   ########.fr       */
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
	printf("-------- TESTING PRINTF RETURN ---------------\n");
	printf("----------------------------------------------\n");
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	// 1
	printf("----------------------------------------------\n");
	i++;
	str = "%-10d";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%012d";
	n = -123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%+011d";
	n = 123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 4
printf("----------------------------------------------\n");
	i++;
	str = "%0-8.3d";
	n = 123456789;
	printf(" %d ||%10s ", 0, str);
	printf("||");
	printf(str, 0);
	printf("||\n");

	printf("\tTESTING PRECISION\n");
	// TESTING PRECISION
	i = 1;
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");
	str = "%-.5d";
	n = 123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
		printf("----------------------------------------------\n");
	i++;
	str = "%-10.5i";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	i++;
// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%0.5d";
	n = 123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");
	i++;
	str = "%#15.10x";
	n = 1123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 4
	printf("----------------------------------------------\n");
	i++;
	str = "%-#20.15x";
	n = 1123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 5
	printf("----------------------------------------------\n");
	i++;
	str = "%-#19x";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 5
	printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("----------------------------------------------\n");
// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%#.19x";
	n = 1123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 4
	printf("----------------------------------------------\n");
	i++;
	str = "%-#.5x";
	n = 1123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 5
	printf("----------------------------------------------\n");
	i++;
	str = "%#x";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	i++;
	printf("----------------------------------------------\n");
	printf("\tTESTING PRECISION AND WIDTH\n");
	// TESTING PRECISION
	i = 1;
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");
	str = "%-15.15d";
	n = 123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%15.20d";
	n = 123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 3
	printf("----------------------------------------------\n");
	i++;
	str = "%-#15.10x";
	n = 1123456789;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, n);
	printf("||\n");
	// 3

	// TESTING STRING FLAGS
	printf("----------------------------------------------\n");
	printf("\tTESTING STRING FLAGS\n");
	printf("----------------------------------------------\n");
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
	printf(str, test);
	printf("||\n");

	printf("----------------------------------------------\n");
	printf("\tTESTING POINTER FORMAT\n");
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");
	// 1
	i++;
	str = "%-15p";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, &n);
	printf("||\n");
	// 2
	printf("----------------------------------------------\n");
	i++;
	str = "%015p";
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
	str = "%19.15p";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, &n);
	printf("||\n");
	// 4
	printf("----------------------------------------------\n");
	i++;
	str = "%19.7p";
	n = 10;
	printf(" %d ||%10s ", i, str);
	printf("||");
	printf(str, &n);
	printf("||\n");

	printf("----------------------------------------------\n");
	printf("\tTESTING PRECISION AND WIDTH\n");
	// TESTING PRECISION
	i = 1;
	printf("----------------------------------------------\n");
	printf("   || %-*s", wd, f);
	printf("||%s\n", o);
	printf("----------------------------------------------\n");
	int in = 123456 ;
	short int sin = 12;
	long lin = 2147483647;
	long long llin = 9223372036854775807;
	// 1
	str = "%i";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, in);
	printf("||");
	printf("%i\n", in);
	printf("----------------------------------------------\n");
	// 2
	i++;
	str = "%hi";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, sin);
	printf("||");
	printf("%hi\n", sin);
	printf("----------------------------------------------\n");
	// 3
	i++;
	str = "%li";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, lin);
	printf("||");
	printf("%li\n", lin);
	printf("----------------------------------------------\n");
	// 4
	i++;
	str = "%lli";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, llin);
	printf("||");
	printf("%lli\n", llin);
	printf("----------------------------------------------\n");
	// 5
	i++;
	str = "%i";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, llin);
	printf("||");
	printf("%lli\n", llin);
	printf("----------------------------------------------\n");
	// 6
	i++;
	str = "%hi";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, in);
	printf("||");
	printf("%i\n", in);
	printf("----------------------------------------------\n");
	// 7
	i++;
	str = "%li";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, llin);
	printf("||");
	printf("%lli\n", llin);
	printf("----------------------------------------------\n");
	// 8
	i++;
	str = "%lli";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, sin);
	printf("||");
	printf("%hi\n", sin);
	printf("----------------------------------------------\n");
	// 9
	i++;
	str = "%llu";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf(str, n);
	printf("||");
	printf("%lli\n", llin);
	printf("----------------------------------------------\n");
	i++;
	str = "%5%";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf("%5%");
	printf("||\n");
	printf("----------------------------------------------\n");
i++;
	str = "%-5%";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf("%5%");
	printf("||\n");
	printf("----------------------------------------------\n");
i++;
	str = "%05%";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf("%5%");
	printf("||\n");
	printf("----------------------------------------------\n");
i++;
	str = "%-05%";
	printf(" %d ||%10s", i, str);
	printf("||");
	printf("%5%");
	printf("||\n");
	printf("----------------------------------------------\n");

	printf("size of char = %lu\n", sizeof(char));
	printf("size of unsigned char = %lu\n", sizeof(unsigned char));
	printf("size of short  = %lu\n", sizeof(short));
	printf("size of unsigned short = %lu\n", sizeof(unsigned short));
	printf("size of int = %lu\n", sizeof(int));
	printf("size of long = %ju\n", sizeof(long));
	printf("size of float= %ju\n", sizeof(float));
	printf("size of double = %ju\n", sizeof(double));
	printf("size of long long = %ju\n", sizeof(long long));
	printf("size of ulong = %ju\n", sizeof(unsigned long));
	printf("size of ulong long = %ju\n", sizeof(unsigned long long));
	printf("size of intmax_t = %ju\n", sizeof(intmax_t));
	printf("size of intptr_t = %ju\n", sizeof(intptr_t));
	printf("size of uintptr_t = %ju\n", sizeof(uintptr_t));
	printf("size of uintmax_t = %ju\n", sizeof(uintmax_t));
	printf("size of int8_t = %ju\n", sizeof(int8_t));
	printf("size of int16_t = %ju\n", sizeof(int16_t));
	printf("size of int32_t = %ju\n", sizeof(int32_t));
	printf("size of int64_t = %ju\n", sizeof(int64_t));
	/*
	   printf("----------------------------------------------\n");
	   printf("\tTESTING N COUNTER\n");
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
