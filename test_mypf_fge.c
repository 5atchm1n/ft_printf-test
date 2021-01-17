/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mypf_fge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/17 07:05:23 by sshakya          ###   ########.fr       */
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
	ft_printf("----------------------------------------------\n");
	ft_printf("-------- TESTING FT_PRINTF RETURN ------------\n");
	ft_printf("----------------------------------------------\n");
	o = "output";
	f ="format";
	wd = 10;
	i = 0;
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING %%G %%E %%F \n");
	// TESTING PRECISION
	i = 1;
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
	float fl = 0.00000457845890820;
	float fl2 = 14578.15720;
	double dbl = 123456.654333;
	ft_printf("f1 = %15.15f & f2 = %15.15f\n", fl, fl2);
// 1	
	ft_printf("----------------------------------------------\n");
	str = "%f";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, dbl);
	ft_printf("||");
	ft_printf("%f\n", dbl);
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%g";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%f\n", fl);
// 3
	ft_printf("----------------------------------------------\n");
	i++;	
	str = "%e";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%f\n", fl);
// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%+15.5f";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%f\n", fl);
// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "% 15.3g";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%f\n", fl);
// 6
	ft_printf("----------------------------------------------\n");
	i++;	
	str = "%015.8e";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%f\n", fl);
	ft_printf("----------------------------------------------\n");
// 6
	i++;	
	str = "%f";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%f\n", fl);
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%f";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%f\n", fl);
// 1	
	ft_printf("----------------------------------------------\n");
	str = "%.10f";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");
// 2
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%.10g";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");

// 3
	ft_printf("----------------------------------------------\n");
	i++;	
	str = "%.10e";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");

// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%20.10f";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");

// 5
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%20.10g";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");
// 6
	ft_printf("----------------------------------------------\n");
	i++;	
	str = "%20.10e";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");
// 7
	ft_printf("----------------------------------------------\n");
	i++;	
	str = "%f";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");
// 8
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%g";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");
// 9	
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%e";
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl2);
	ft_printf("||\n");
	ft_printf("----------------------------------------------\n");

	return (0);
}
