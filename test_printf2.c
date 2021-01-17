/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/17 04:18:08 by sshakya          ###   ########.fr       */
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
	int		i;
	printf("----------------------------------------------\n");
	printf("-------- TESTING PRINTF LENGHT MOD -----------\n");
	printf("----------------------------------------------\n");
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
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
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, in);
	printf("||");
	printf("%i\n", in);
	printf("----------------------------------------------\n");
	// 2
	i++;
	str = "%hi";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, sin);
	printf("||");
	printf("%hi\n", sin);
	printf("----------------------------------------------\n");
	// 3
	i++;
	str = "%li";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, lin);
	printf("||");
	printf("%li\n", lin);
	printf("----------------------------------------------\n");
	// 4
	i++;
	str = "%lli";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, llin);
	printf("||");
	printf("%lli\n", llin);
	printf("----------------------------------------------\n");
	// 5
	i++;
	str = "%i";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, llin);
	printf("||");
	printf("%lli\n", llin);
	printf("----------------------------------------------\n");
	// 6
	i++;
	str = "%hi";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, in);
	printf("||");
	printf("%i\n", in);
	printf("----------------------------------------------\n");
	// 7
	i++;
	str = "%li";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, llin);
	printf("||");
	printf("%lli\n", llin);
	printf("----------------------------------------------\n");
	// 8
	i++;
	str = "%lli";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, sin);
	printf("||");
	printf("%hi\n", sin);
	printf("----------------------------------------------\n");
	// 9
	i++;
	str = "%llu";
	printf(" %d ||%-4s", i, str);
	printf("||");
	printf(str, llin);
	printf("||");
	printf("%lli\n", llin);
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
	printf("----------------------------------------------\n");
	return (0);
}
