/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:33:44 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 13:35:30 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include "libft.h"
int main(void)
{
	char a = 'c';
	printf("'%c' is %s\n", a, ft_isdigit(a) ? "digit" : "not digit");
	return 0;
}