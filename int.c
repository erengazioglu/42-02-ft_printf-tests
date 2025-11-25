/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:01:17 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/25 19:22:01 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("---\nINTS\n");
	printf("test 1: %d hey\n", -424242);
	printf("test 2: %20d hey\n", -424242);
	printf("test 3: %-20d hey\n", -424242);
	printf("test 4: %.5d hey\n", -424242);
	printf("test 5: %20.5d hey\n", -424242);
	printf("test 6: %020.8d hey\n", -424242);
	printf("test 7: % d hey\n", -424242);
	printf("test 8a: %020d hey\n", INT_MIN);
	printf("test 8b: %020.20d hey\n", INT_MIN);
	printf("test 8c: %020.19d hey\n", INT_MIN);
	printf("test 8d: %020.18d hey\n", INT_MIN);
	printf("test 8e: %9.5d hey\n", -40);
	printf("test 9a: %020d hey\n", INT_MAX);
	printf("test 9b: %020.20d hey\n", INT_MAX);
	printf("test 9c: %020.19d hey\n", INT_MAX);
	printf("test 9d: %020.18d hey\n", INT_MAX);
	printf("test 9e: %9.5d hey\n", 40);
}