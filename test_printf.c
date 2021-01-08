/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 08:54:28 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/07 20:56:28 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		main(void)
{
	char *str;
	char *o;
	int		n;

	printf("-----------------------------\n");
	printf("--- TESTING PRINTF RETURN ---\n");
	printf("-----------------------------\n");
	o = "output";

	printf("%27s\n", o);

	printf("-----------------------------\n");
	str = "%-10d";
	n = 10;
	printf("format ||%7s ", str);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("-----------------------------\n");
	str = "%010d";
	n = 10;
	printf("format ||%7s ", str);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("-----------------------------\n");
	str = "%-#10x";
	n = 10;
	printf("format ||%7s ", str);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("-----------------------------\n");
	str = "%#x";
	n = 10;
	printf("format ||%7s ", str);
	printf("||");
	printf(str, n);
	printf("||\n");
	printf("-----------------------------\n");
	str = "%#x%010n";
	n = 10;
	int t;
	printf("format ||%7s ", str);
	printf("||");
	printf(str, n, &t);
	printf("|| n = %d", t);
	printf("||\n");
	printf("-----------------------------\n");
str = "%-10#x";
	n = 10;
	printf("       ||%7s ", str);
	printf("||");
	printf(str, n);
	printf("|| defaults to str ?\n");
	printf("-----------------------------\n");

	return (0);
}
