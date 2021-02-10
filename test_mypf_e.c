/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mypf_e.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/02/10 02:34:18 by sshakya          ###   ########.fr       */
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
	ft_printf("----------------------------------------------\n");
	ft_printf("\tTESTING %%E \n");
	// TESTING PRECISION
	i = 1;
	ft_printf("----------------------------------------------\n");
	ft_printf("   || %-*s", wd, f);
	ft_printf("||%s\n", o);
//	float fl= 000.99999997845890820;
//	float fl2 = 14578.15720;
	//	float fl= 000.99999997845890820;
	double fl  = 0.09999999; // 8
	double fl2 = 1.0; // 7
	double fl3 = 0.099999;  // 6
	double fl4 = 0.09999; // 5
	double fl5 = 0.0999; // 5
//	float fl2 = 14578.15720;
	printf("f1 = %f & f2 = %f\n", fl, fl2);
	printf("f3 = %f & f4 = %f & f5 = %f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");
// 1	
	printf("=> %.10f\n", fl);
	str = "%e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	printf("=> %.10f\n", fl2);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	printf("=> %.10f\n", fl3);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	printf("=> %.10f\n", fl4);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%.1e";
	fl5 = 1.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%.2e";
	fl5 = 1.9999;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%.2e";
	fl5 = 2;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
str = "%.e";
	fl5 = 2.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
str = "%.e";
	fl5 = 2.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
str = "%e";
	fl5 = 0.5245687;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	str = "%.e";
	fl5 = 0.5245687;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	str = "% .5e";
	fl5 = 0.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	str = "%+0*.*e";
	fl5 = 0.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, -15, -16, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, -15, -16, fl5);
	printf("||");
	printf("%i||\n", n);
	fl5 = 0;
	str = "%-4.e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str,fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%+0*.1e";
	fl5 = .5627562014631401;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 4, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 4, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%+00.*e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str,0, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str,0,fl5);
	printf("||");
	printf("%i||\n", n);
	
	fl5 = 1.1254924029263;
	str = "%+0*.e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);
	fl5 = 1.1254924029263;
	str = "%*.0e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);


	ft_printf("----------------------------------------------\n");
	fl  = -5.012345678912300; // 8
	fl2 = -0.0012345678912300; // 7
	fl3 = 0.00012345678913200;  // 6
	fl4 = 0.000012345678912300; // 5
	fl5 = 0.000001023400; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f & f5 = %.9f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");
// 1	
	str = "%e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
// 8
	ft_printf("----------------------------------------------\n");
	fl  = 5.012345678912300; // 8
	fl2 = 0.0012345678912300; // 7
	fl3 = 0.00012345678913200;  // 6
	fl4 = 0.000012345678912300; // 5
	fl5 = 0.000001023400; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f \nf5 = %.9f\n", fl3, fl4, fl5);
	
	// 9	
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	ft_printf("----------------------------------------------\n");
	fl  = 12345649.1257855546; // 8
	fl2 = 1231.12356; // 7
	fl3 = 12.123456987;  // 6
	fl4 = 12345678912300; // 5
	fl5 = 123000001023400; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f \n f5 = %.9f\n", fl3, fl4, fl5);
	
	// 9	
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);


	ft_printf("----------------------------------------------\n");
	fl  = 5.99999999; // 8
	fl2 = 0.09999999; // 7
	fl3 = 0.999;  // 6
	fl4 = 0.000999; // 5
	fl5 = 0.000009; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f \n f5 = %.9f\n", fl3, fl4, fl5);
	
	// 9	
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	ft_printf("----------------------------------------------\n");
	fl  = -5.012345678912300; // 8
	fl2 = -0.0012345678912300; // 7
	fl3 = 0.00012345678913200;  // 6
	fl4 = 0.000012345678912300; // 5
	fl5 = 0.000001023400; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f & f5 = %.9f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");


// 1	
	i++;
	ft_printf("----------------------------------------------\n");
	str = "%.10e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	ft_printf("----------------------------------------------\n");
	fl  = 12345649.1257855546; // 8
	fl2 = 1231.12356; // 7
	fl3 = 12.123456987;  // 6
	fl4 = 12345678912300; // 5
	fl5 = 123000001023400; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f \n f5 = %.9f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%.10e";
		ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	ft_printf("----------------------------------------------\n");
	fl  = 5.99999999; // 8
	fl2 = 0.09999999; // 7
	fl3 = 0.999;  // 6
	fl4 = 0.000999; // 5
	fl5 = 0.000009; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f \n f5 = %.9f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");
	i++;	
	str = "%.10e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	ft_printf("----------------------------------------------\n");
	fl  = -5.012345678912300; // 8
	fl2 = -0.0012345678912300; // 7
	fl3 = 0.00012345678913200;  // 6
	fl4 = 0.000012345678912300; // 5
	fl5 = 0.000001023400; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f & f5 = %.9f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");

// 4
	ft_printf("----------------------------------------------\n");
	i++;
	str = "%20.10e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	ft_printf("----------------------------------------------\n");
	fl  = 12345649.1257855546; // 8
	fl2 = 1231.12356; // 7
	fl3 = 12.123456987;  // 6
	fl4 = 12345678912300; // 5
	fl5 = 123000001023400; // 5
	printf("f1 = %.9f & f2 = %.9f\n", fl, fl2);
	printf("f3 = %.9f & f4 = %.9f \n f5 = %.9f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");
	i++;	
	str = "%20.10e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	ft_printf("----------------------------------------------\n");
	fl  = 0.09999999; // 8
	fl2 = 1.0; // 7
	fl3 = 0.099999;  // 6
	fl4 = 0.09999; // 5
	fl5 = 0.0999; // 5
	printf("f1 = %f & f2 = %f\n", fl, fl2);
	printf("f3 = %f & f4 = %f & f5 = %f\n", fl3, fl4, fl5);
	ft_printf("----------------------------------------------\n");
// 1	
	printf("=> %.10f\n", fl);
	str = "%e";
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	printf("=> %.10f\n", fl2);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl2);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl2);
	printf("||");
	printf("%i||\n", n);
	
	printf("=> %.10f\n", fl3);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl3);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl3);
	printf("||");
	printf("%i||\n", n);
	
	printf("=> %.10f\n", fl4);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl4);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl4);
	printf("||");
	printf("%i||\n", n);
	
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%.1e";
	fl5 = 1.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%.2e";
	fl5 = 1.9999;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%.2e";
	fl5 = 2;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
str = "%.e";
	fl5 = 2.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
str = "%.e";
	fl5 = 2.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
str = "%e";
	fl5 = 0.5245687;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	str = "%.e";
	fl5 = 0.5245687;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	str = "% .5e";
	fl5 = 0.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, fl5);
	printf("||");
	printf("%i||\n", n);
	str = "%+0*.*e";
	fl5 = 0.5;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, -15, -16, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, -15, -16, fl5);
	printf("||");
	printf("%i||\n", n);
	fl5 = 0;
	str = "%-4.e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str,fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%+0*.1e";
	fl5 = .5627562014631401;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 4, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 4, fl5);
	printf("||");
	printf("%i||\n", n);

	str = "%+00.*e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str,0, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str,0,fl5);
	printf("||");
	printf("%i||\n", n);
	
	fl5 = 1.1254924029263;
	str = "%+0*.e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);
	fl5 = 1.1254924029263;
	str = "%*.0e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);
	i++;	
	fl = 0;
	fl2 = 100000000000;
	str = "%e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);
	i++;	
	str = "%e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);
	i++;	
	str = "%e";
	fl = 10;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	fl = 11;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
		printf(" %d ||%10s", i, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	fl = 2;
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	fl = -10;

	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	fl = 0;
	str = "%10.e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", i, str);
	ft_printf("||");
	ft_printf(str, fl);
	ft_printf("||\n");
	printf(" %d ||%10s", i, str);
	printf("||");
	n = printf(str, fl);
	printf("||");
	printf("%i||\n", n);

	fl5 = 1.1254924029263;
	str = "%#*.0e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);
	str = "%#*.e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);
	fl5 = 0;
	str = "%#*.7e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);
	fl5 = 3;
	str = "%#*.0e";
	printf("=> %.10f\n", fl5);
	ft_printf(" %d ||%10s", 1, str);
	ft_printf("||");
	n = ft_printf(str, 5, fl5);
	ft_printf("||");
	ft_printf("%i||\n", n);
	printf(" %d ||%10s", 1, str);
	printf("||");
	n = printf(str, 5, fl5);
	printf("||");
	printf("%i||\n", n);
	int z = 4;
	int w = 10;
	fl5 = 1.80018001800;
	while (w > 0)
	{
		str = "%0*.*e";
		printf("=> %.10f | w = %d | p = %d\n", fl5, w, z);
		ft_printf(" %d ||%10s", 1, str);
		ft_printf("||");
		n = ft_printf(str, w, z, fl5);
		ft_printf("||");
		ft_printf("%i||\n", n);
		printf(" %d ||%10s", 1, str);
		printf("||");
		n = printf(str, w, z, fl5);
		printf("||");
		printf("%i||\n", n);
		w--;
	}


	return (0);
}
