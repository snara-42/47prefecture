/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokushima.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 08:33:13 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/01 08:40:05 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (i);
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	write(1, "kowai!\n", ft_strlen("kowai\n") + 1);
	return (0);
}
