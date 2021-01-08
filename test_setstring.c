/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 00:18:09 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/05 07:27:34 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		main(void)
{
	char	*test;
	char	*ret;

	test = "0-50.50uthisisatest";

	ret = pf_setstring(test, &ret);

	printf("%s\n", ret);
	
	return (0);
}
