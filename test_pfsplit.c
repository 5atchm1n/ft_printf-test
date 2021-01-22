/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_pfsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 08:26:04 by sshakya           #+#    #+#             */
/*   Updated: 2021/01/21 22:50:49 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int main(void)
{
	char	**test;
	int		i;
	char	*teststr;

	i = 0;
    teststr = "%010zu this is a testX%-10.1d another testX%%test%cX";
	
	printf("----------------------------------\n");
	test = pf_split(teststr);
	printf("%s\n", teststr);
	
	printf("----------------------------------\n");
	if (test == NULL)
	{
		printf("test = NULL");
		return (0);
	}
	while (test[i] != NULL)
	{
		printf("tab[%d] = %s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("tab[%d] = %s\n", i, test[i]);
	free(test);
	
	i = 0;
	teststr = "%%rdmtest%%%%%%";
	
	printf("----------------------------------\n");
	test = pf_split(teststr);
	printf("%s\n", teststr);
	
	printf("----------------------------------\n");
	if (test == NULL)
	{
		printf("test = NULL");
		return (0);
	}
	while (test[i] != NULL)
	{
		printf("tab[%d] = %s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("tab[%d] = %s\n", i, test[i]);
	free(test);

	i = 0;
	teststr = "%5%test%0pwithstuff%ull";
	
	printf("----------------------------------\n");
	test = pf_split(teststr);
	printf("%s\n", teststr);
	printf("----------------------------------\n");
	if (test == NULL)
	{
		printf("test = NULL");
		return (0);
	}
	while (test[i] != NULL)
	{
		printf("tab[%d] = %s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("tab[%d] = %s\n", i, test[i]);
	free(test);
	i = 0;
	teststr = " %d ||%10s ";
	
	printf("----------------------------------\n");
	test = pf_split(teststr);
	printf("%s\n", teststr);
	printf("----------------------------------\n");
	if (test == NULL)
	{
		printf("test = NULL");
		return (0);
	}
	while (test[i] != NULL)
	{
		printf("tab[%d] = %s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("tab[%d] = %s\n", i, test[i]);
	free(test);
	i = 0;
	teststr = "%5%";
	
	printf("----------------------------------\n");
	test = pf_split(teststr);
	printf("%s\n", teststr);
	printf("----------------------------------\n");
	if (test == NULL)
	{
		printf("test = NULL");
		return (0);
	}
	while (test[i] != NULL)
	{
		printf("tab[%d] = %s\n", i, test[i]);
		free(test[i]);
		i++;
	}
	printf("tab[%d] = %s\n", i, test[i]);
	free(test);

	return (0);
}

