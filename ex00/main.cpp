/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:15:16 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/06 15:17:25 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::array<int, 5>	arr = {12, 13, 2, 12, 10};

	std::vector<int>	vec;
	vec.push_back(12);
	vec.push_back(13);
	vec.push_back(2);
	vec.push_back(10);

	std::list<int>	lst;
	lst.push_back(12);
	lst.push_back(3);

	if (easyfind(arr, 13))
		std::cout << "Number founded" << std::endl;
	else
		std::cout << "Number Not founded" << std::endl;
	(void)arr;
}
