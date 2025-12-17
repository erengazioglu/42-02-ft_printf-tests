/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 12:34:10 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/17 18:40:00 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nBasic tests\n");
	fflush(stdout);
	run_test_argless("Random string (without varg)");
	run_test_argless("Invalid conversion: %4 (without varg)");
	run_test("Invalid conversion: %4 (with varg)", 12);
	// run_test("Invalid mixed in: %4 %s (with extra varg)", 12, "hey");
	run_test("Invalid mixed in: %4 %s (without extra varg)", "hey");

	// run_test_argless(NULL);
	// run_test_argless("");
}