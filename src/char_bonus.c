/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:01:17 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/28 20:46:10 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nCHARS (Bonus)\n");
	fflush(stdout);
	run_test("test 1: %c", 's');
	run_test("test 2: %20c", 's');
	run_test("test 3: %-20c", 's');
	
	// run_test("UNDEFINED BEHAVIOR:\n");
	// fflush(stdout);
	// run_test("test 7: % c\n", 's');
	// run_test("test 8: %#c\n", 's');
	// run_test("test 9: %+020c\n", 's');
}