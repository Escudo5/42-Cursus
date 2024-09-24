/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:13:39 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/24 13:17:05 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include "libft.h"
int main(void)
{
	char a = 'a';
	printf("'%c'", a);
	return 0;
}

