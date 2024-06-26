
#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

template <typename T> int NumbersGoogle(T& container, int toSearch) {

	typename T::iterator ite = std::find(container.begin(), container.end(), toSearch);
	if (ite != container.end())
		return (1);
	return (0);
}

#endif //EASYFIND_TPP
