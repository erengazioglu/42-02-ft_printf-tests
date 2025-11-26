/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:01:17 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/26 11:48:58 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	main(void)
{
	printf("test 0: nothing\n");
	printf("test 1: %c\n", 'a');

	// field width
	printf("test 2: %20c\n", 'a');
	printf("test 3: %-20c\n", 'a');

	// precision (undefined)
	printf("test 4: %.16c\n", 'a');
	printf("test 5: %20.16c\n", 'a');
	printf("test 6: %20.16c\n", 'a');
	
	// flags (undefined)
	printf("test 7: % c\n", 'a');
	printf("test 8: %#c\n", 'a');
	printf("test 9: %+020c\n", 'a');
}