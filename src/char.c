/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:48:01 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/28 20:24:43 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nCHARS\n");
	fflush(stdout);
	run_test("Test 01: %c", 'a');
	run_test("Test 02: %c", '\t');
	run_test("Test 03: %c", 255);
	run_test("Test 04: %c%c", '4', '2');
}