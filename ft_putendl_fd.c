/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:25:07 by smarquez          #+#    #+#             */
/*   Updated: 2024/09/26 11:37:16 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    if (s == NULL)
        return;
    ft_putstr_fd(s, fd);
    write(fd,"\n", 1);
}