/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:48:52 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/14 13:50:51 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nStrings\n");
	fflush(stdout);
	run_test("Test 1: %s", "Simple");
	run_test("Test 2: %s%s", "Sim-", "ple");
	run_test("Test 3: %s%s%s", "", "", "Hello");
	// run_test("Test 4: %s%s%s", NULL, "", "Hello");
}