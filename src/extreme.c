/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extreme.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:03:48 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/17 17:35:56 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

void	test_suite(void)
{
	printf("---\nExtreme tests (Probably not necessary)\n");
	fflush(stdout);
	run_test_argless("Invalid flag: %bs (without varg)");
	run_test("Invalid flag: %bs (with varg)", "hello");
	run_test("Invalid flag: %ws (with varg)", "hello");

	run_test("Invalid flag mixed in: %bs (with varg)", "hello");
	run_test_argless("Repeated flag: %++d (without varg)");
	run_test("Repeated flag: %++d (with varg)", 12);
	run_test("Repeated flag: %+++++4d (with varg)", 12);
	run_test("Repeated flag: %++++++4+d (with varg)", 12);
	run_test("Repeated flag: %----# 4d (with varg)", 12);





	// run_test_argless(NULL);
	// run_test_argless("");
}