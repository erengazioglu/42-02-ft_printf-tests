/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:48:52 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/28 20:24:09 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	test_suite(void)
{
	printf("---\nCHARS (Bonus)\n");
	fflush(stdout);
	run_test("test 0: nothing\n");
	run_test("test 1: %s\n", "simple");
	run_test("test 2: %20s\n", "FW20");
	run_test("test 3: %-20s\n", "FW20 + lalign");
	run_test("test 4: %.16s\n", "just P16");
	run_test("test 5: %20.16s\n", "FW20, P16");
	run_test("test 6: %20.16s\n", "long string jkfgfkdjgdfkjgdfh");
	run_test("test 7: % s\n", "space");
	run_test("test 8: %#s\n", "alternate form");
	run_test("test 9: %+020s\n", "+, 0, FW20");
}