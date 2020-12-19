/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:54:01 by sshakya           #+#    #+#             */
/*   Updated: 2020/12/18 23:26:06 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
	t_flags flags;
	char	*teststr;

	teststr = "%0-50";

	flags = *ft_setflags(teststr, &flags);
	
	printf("left[-]   = %d\n",flags.left);
	printf("zero[0]   = %d\n",flags.zero);
	printf("fwidth[]  = %d\n",flags.fwidth);
	printf("precision = %d\n",flags.precision);
	printf("pwidth[]  = %d\n",flags.pwidth);
	printf("str = %s\n", teststr);
}


