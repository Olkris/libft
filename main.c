/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalea <abalea@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:26:05 by abalea            #+#    #+#             */
/*   Updated: 2026/11/04 15:54:36 by abalea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int unit_tests();

int	main(int argc, char *argv[])
{
	printf("Input: %s\n", argv[1]);
	printf("Memset: %s\n", ft_memset(argv[1], *argv[2], atoi(argv[3])));
}
