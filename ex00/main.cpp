/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:15:16 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/03 11:31:13 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::array<int, 5>	arr = {12, 3, 2, 12, 10};

	std::vector<int>	vec;
	vec.push_back(12);
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(10);

	std::list<int>	lst;
	lst.push_back(12);
	lst.push_back(3);

	if (easyfind(vec, 13))
		std::cout << "Number founded" << std::endl;
	else
		std::cout << "Number Not founded" << std::endl;
	(void)arr;
}
