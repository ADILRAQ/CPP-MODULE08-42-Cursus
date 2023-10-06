/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:59:48 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/06 10:49:00 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		Span sp = Span(10);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::vector<int>	vec;
		vec.push_back(121);
		vec.push_back(-1);
		vec.push_back(8);
		vec.push_back(-13);
		vec.push_back(-13);

		sp.fastFill(vec.begin(), vec.end());

		std::cout << "Short: " << sp.shortestSpan() << std::endl;
		std::cout << "Long: " << sp.longestSpan() << std::endl;
	}
	catch (const std::string &str)
	{
		std::cout << str << std::endl;
	}
}
