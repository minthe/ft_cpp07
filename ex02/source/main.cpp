/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:55:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 00:58:31 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Array.class.hpp"

int	main()
{
	Array<int> *test = new Array<int>();
	std::cout << test->getName() << std::endl;
	delete test;
	return 0;
}