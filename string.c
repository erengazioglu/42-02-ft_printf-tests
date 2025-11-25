/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:48:52 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/25 13:00:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("test 0: nothing\n");
	printf("test 1: %s\n", "simple");

	// field width
	printf("test 2: %20s\n", "FW20");
	printf("test 3: %-20s\n", "FW20 + lalign");

	// precision
	printf("test 4: %.16s\n", "just P16");
	printf("test 5: %20.16s\n", "FW20, P16");
	printf("test 6: %20.16s\n", "long string jkfgfkdjgdfkjgdfh");
	
	// undefined behavior
	printf("test 7: % s\n", "space");
	printf("test 8: %#s\n", "alternate form");
	printf("test 9: %+020s\n", "+, 0, FW20");
}