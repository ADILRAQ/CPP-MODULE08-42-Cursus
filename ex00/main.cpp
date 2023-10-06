/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:15:16 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/05 14:05:16 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename Container> void	fun(typename Container::iterator beg, typename Container::iterator end)
{
	while (beg != end)
		std::cout << *beg++ << " ";
	std::cout << std::endl;
}

int	main()
{
	// std::array<int, 5>	arr = {12, 13, 2, 12, 10};

	std::vector<int>	vec;
	vec.push_back(12);
	vec.push_back(13);
	vec.push_back(2);
	vec.push_back(10);

	fun<std::vector<int> >(vec.begin(), vec.end());

	// std::list<int>	lst;
	// lst.push_back(12);
	// lst.push_back(3);

	// if (easyfind(lst, 13))
	// 	std::cout << "Number founded" << std::endl;
	// else
	// 	std::cout << "Number Not founded" << std::endl;
	// (void)arr;
}
