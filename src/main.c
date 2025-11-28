/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:58:02 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/27 18:51:35 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	main(void)
{
	#ifdef USE_CUSTOM
	test_suite(ft_printf);
	#else
	test_suite(printf);
	#endif
	return (0);
}