/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:54:01 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/05 07:28:25 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			main (void)
{
	t_flags flags;
	char	*teststr;

	teststr = "%0-50.50*thisisatest";
	flags = *pf_setflags(teststr, &flags);

	printf("-----------------------------\n");
	printf("--- TESTING FT_SETLIST ---\n");
	printf("-----------------------------\n");
	
	printf("-----------------------------\n");
	printf("         %s\n", teststr);
	printf("-----------------------------\n");
	
	printf("     left[-] = %d\n",flags.left);
	printf("     zero[0] = %d\n",flags.zero);
	printf(" asterisk[*] = %d\n",flags.asterisk);
	printf("   fwidth[ ] = %d\n",flags.fwidth);
	printf("precision[ ] = %d\n",flags.precision);
	printf("   pwidth[ ] = %d\n",flags.pwidth);
	
	return (0);
}


