/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 18:26:16 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/17 19:56:29 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/tests.h"

int main(void)
{
	// printf("hey %s\n", "hello");
	// printf("hey %8s\n", "hello");
	
	printf("Invalid conversion: %4 (without varg)\n");
	ft_printf("Invalid conversion: %4 (without varg)\n");

	printf("---\nStrings (Bonus)\n");
	fflush(stdout);
	ft_printf("test 1: %s", "simple\n");
	ft_printf("test 2: %20s", "FW20\n");
	ft_printf("test 3: %-20s", "FW20 + lalign\n");
	ft_printf("test 4: %.16s", "just P16\n");
	ft_printf("test 5: %20.16s", "FW20, P16\n");
	ft_printf("test 6: %20.16s", "long string jkfgfkdjgdfkjgdfh\n");
}