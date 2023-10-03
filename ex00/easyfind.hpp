/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:12:39 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/03 11:06:10 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <list>

template <typename Container> bool	easyfind(Container arr, int integerToFinf)
{
	typename Container::iterator	it = std::find(arr.begin(), arr.end(), integerToFinf);

	return (it == arr.end() ? false : true);
}
