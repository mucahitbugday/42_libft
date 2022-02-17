/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:06:03 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 11:41:32 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
//diziyi deneme.txt ye yazar
int main(void)
{
	ssize_t b = open("deneme.txt", O_WRONLY);
	
	char *str = "Hello World!";
	
	ft_putstr_fd(str,b);
	
	return 0;
}
*/