/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjkim <hanjkim@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:09:05 by hanjkim           #+#    #+#             */
/*   Updated: 2024/09/16 16:09:19 by hanjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** **/

#include "ft_printf.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char	*str;
	int len1;
	int	len2;

	str = "Hello, World!";
	len1 = ft_printf("%%%%%%s\n", str);
	len2 = printf("%%%%%%s\n", str);
	ft_printf("Length: %d\n", len1);
	ft_printf("Length: %d\n", len2);
	return (0);
}
