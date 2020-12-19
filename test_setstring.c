/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_setstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 00:18:09 by sshakya           #+#    #+#             */
/*   Updated: 2020/12/19 00:54:52 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char	*test;
	char	*ret;

	ret = NULL;
	test = "0-50.50uthisisatest";

	ret = ft_setstring(test, &ret);

	printf("%s\n", ret);
	free(ret);
	
	return (0);
}
